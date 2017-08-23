#include <TCanvas.h>
#include <TLegend.h>
#include <TH1.h>
#include <TF1.h>
#include <TMath.h>
#include <TLorentzVector.h>
#include <TProfile.h>

#include "DTEvent.h"

void getMomentum(DTEvent* ev, Int_t cluster, TLorentzVector* p){
	p->SetPx(ev->arrClusters_fP_fX[cluster]);
	p->SetPy(ev->arrClusters_fP_fY[cluster]);
	p->SetPz(ev->arrClusters_fP_fZ[cluster]);
	p->SetE(ev->arrClusters_fE[cluster]);
}

TH1D* hMass = new TH1D("pi0massSpectra", "pi0 mass spectra", 400, 0.1, 0.5);
TH1D* hBgMass = new TH1D("pi0massBgSpectra", "pi0 mass background spectra", 400, 0.1, 0.5);
TH1D* hRapidity = new TH1D("pseudorapidity", "Photons pseudorapidity", 100, 0.0, 0.18);
TH1D* hPhi = new TH1D("phi", "Photons phi angle", 200, -2.0, -0.5);
TProfile* pMassPt = new TProfile("massPtProfile", "pi0 Mass vs pT",
		100, 0.0, 5.0,
		0.1, 0.18
		);

TF1* fitMassSpectra(TH1* hist, Double_t peakX1, Double_t peakX2){
	TF1 gausBg("gBg", "gaus",
			hist->GetXaxis()->GetXmin(),
			hist->GetXaxis()->GetXmax());

	TF1 gausPeak("gPeak", "gaus", peakX1, peakX2);

	Double_t fitPars[6];
	hist->Fit(&gausBg, "NR");
	gausBg.GetParameters(&fitPars[0]);
	hist->Fit(&gausPeak, "NR");
	gausPeak.GetParameters(&fitPars[3]);

	auto* fitHist = new TF1("massSpectraFit", "gaus(0) + gaus(3)",
			hist->GetXaxis()->GetXmin(),
			hist->GetXaxis()->GetXmax());
	fitHist->SetParameters(fitPars);
	hist->Fit(fitHist, "NR+");

	return fitHist;
}
Double_t getMass(TLorentzVector p1, TLorentzVector p2){
	return TMath::Sqrt(2*p1*p2);
}

void mixingMassSpectra(DTEvent* ev, Int_t i, TH1* hist){
	if (i == 0) return;

	TLorentzVector p1, p2;
	Int_t nc1, nc2;

	ev->GetEntry(i);
	nc1 = ev->nClusters;

	ev->GetEntry(i-1);
	nc2 = ev->nClusters;

	for (Int_t j = 0; j < nc1; j++){
		ev->GetEntry(i);
		getMomentum(ev, j, &p1);

		ev->GetEntry(i-1);
		for (Int_t jj = 0; jj < nc2; jj++){
			getMomentum(ev, jj, &p2);

			hist->Fill(getMass(p1, p2));
		}
	}
}




TObjArray hList(0);

int main(int argc, char** argv){
	gROOT->Reset();

	DTEvent ev;

	Int_t nentries = ev.fChain->GetEntriesFast();

	Double_t totalE = 0;

	TLorentzVector p1, p2;
	for (Int_t i = 0; i < nentries; i++){
		ev.GetEntry(i);

		for (Int_t j = 0; j < ev.nClusters; j++){
			getMomentum(&ev, j, &p1);
			totalE += ev.arrClusters_fE[j];

			for (Int_t k = 0; k < j; k++){
				getMomentum(&ev, k, &p2);

				if (p1.Perp() > 1.0 && p2.Perp() > 1.0)
					hMass->Fill(getMass(p1,p2));

				pMassPt->Fill(p1.Perp(), getMass(p1, p2));
			}

			hRapidity->Fill(TMath::Abs(p1.PseudoRapidity()));
			hPhi->Fill(p1.Phi());
		}

		mixingMassSpectra(&ev, i, hBgMass);
	}

	TF1* fitMass = fitMassSpectra(hMass, 0.12, 0.15);


	printf("Total energy: %f\n", totalE);

	TFile f("result.root", "recreate");
	hList.Add(hMass);
	hList.Add(hBgMass);
	hList.Add(hRapidity);
	hList.Add(hPhi);
	hList.Add(pMassPt);
	hList.Add(fitMass);
	hList.Write();
	f.Close();

	return 0;
}
