#include <iostream>
#include <vector>

#include <TFile.h>
#include <TTree.h>
#include <TMath.h>

#include <TH1.h>
#include <TH2.h>
#include <TH3.h>
#include <TProfile.h>

#include <Math/Point3D.h>
#include <Math/Vector3D.h>

#include <DataTreeEvent.h>
#include <QnCorrectEventSelector.h>
#include <FVNA61EventSelector.h>

using namespace std;
using namespace ROOT::Math;
using namespace TMath;

const Int_t     ZPOSITION_INDEX = 0;
const Double_t  IMPACT_ZPOSITION = -581;


TH2D* azimuthal_eta = new TH2D(
	"azimuthal_eta", "\\phi", 
	100, -TMath::Pi(), TMath::Pi(),
	100, 1.0, 5.0
);

TH2D* azimuthal_pt = new TH2D(
	"azimuthal_pt", "\\phi", 
	100, -TMath::Pi(), TMath::Pi(),
	100, 0.0, 1.0
);

TH3D* phi_eta_pt = new TH3D(
	"phi_eta_pt", "\\phi", 
	100, -TMath::Pi(), TMath::Pi(),
	50, 1.0, 5.0,
	50, 0.0, 1.0
);

TProfile* weight_phi = new TProfile(
	"weight_phi", "w_i(\\phi)",
	100, -TMath::Pi(), TMath::Pi()
);

TH1D* cosineTotalCorrelation = new TH1D(
	"cosineTotalCorrelation", 
	"<cos(\\phi_1 - \\phi_2)>",
	100,-1,1
);


TH1D* event_plane_corr = new TH1D(
	"event_plane_corr",
	"\\Phi",
	100, -TMath::Pi(), TMath::Pi()
);

TH1D* event_plane_uncorr = new TH1D(
	"event_plane_uncorr",
	"\\Phi",
	100, -TMath::Pi(), TMath::Pi()
);

TH1D* event_plane_sampled = new TH1D(
	"event_plane_sampled",
	"<cos(\\Phi_a - \\Phi_b)>",
	100, -1, 1
);

TProfile* flowVectorV1_eta = new TProfile("v1_eta" , "v_1", 100, 1.0, 5.0);
TProfile* flowVectorV1_pT  = new TProfile("v1_pT"  , "v_1", 100, 0.1, 1.0);

TFile fd("result.root");

Double_t getWeight(XYZVectorD* pp) {

	if (fd.IsOpen()) {
		TH1D* az = (TH1D*) fd.Get("phi_eta_pt");
		if (az != nullptr) {
			Int_t xbin_n = az->GetXaxis()->FindBin(pp->Phi());
			Int_t ybin_n = az->GetYaxis()->FindBin(pp->Eta());
			Int_t zbin_n = az->GetZaxis()->FindBin(pp->Rho());
			Int_t bin_n = az->GetBin(xbin_n, ybin_n, zbin_n);
			if (az->GetBinContent(bin_n) > 0) {
				return 1.0/az->GetBinContent(bin_n);
			}
		}
	}

	return 1.0;
}


Bool_t Cut(DataTreeEvent* ev)
{
	return true;
}

inline Bool_t DataTreeTrackCut(DataTreeTrack* track) 
{
	// if (track->GetPt(ZPOSITION_INDEX) < 0.1)
	// {
	// 	return false;
	// }

	Double_t eta = Abs(track->GetEta(ZPOSITION_INDEX));

	if (eta > 2.5) {
		return false;
	}

	if (-2.1 < track->GetPhi(ZPOSITION_INDEX) && track->GetPhi(ZPOSITION_INDEX) < -1.1)
	{
		return false;
	}
	
	if (1.1 < track->GetPhi(ZPOSITION_INDEX) && track->GetPhi(ZPOSITION_INDEX) < 2.15)
	{
		return false;
	}

	
	return true;
}

void Exec(DataTreeEvent* ev)
{
	
	Int_t nTracks = ev->GetNTracks();
	
	if (nTracks < 10)
	{
		return;
	}
	
	DataTreeTrack* track;
	
	Double_t phi_1;
	Double_t phi_2;
	
	RhoEtaPhiPointD fv_eventPlane;
	RhoEtaPhiPointD fv_eventPlane_uncorr;
	
	RhoEtaPhiPointD fv_sample_1;
	RhoEtaPhiPointD fv_sample_2;
	
	std::vector<Double_t> phi1_phi2_total_correlation;
	
	
	
	bool tracks_flag = false;
	
	for (int itx = 0; itx < nTracks; itx++) {
		track = ev->GetTrack(itx);

		XYZVectorD pp(
			track->GetPx(ZPOSITION_INDEX), 
			track->GetPy(ZPOSITION_INDEX),
			track->GetPz(ZPOSITION_INDEX)
		);

		phi_1 = pp.Phi();
		azimuthal_eta->Fill(phi_1, pp.Eta());
		azimuthal_pt->Fill(phi_1, track->GetPt(ZPOSITION_INDEX));
		phi_eta_pt->Fill(phi_1, pp.Eta(), track->GetPt(ZPOSITION_INDEX));

		if (!DataTreeTrackCut(track))
		{
			continue;
		}	
		
		/* TODO normal weight function */
		XYZVectorD fv_u = pp.Unit();
		weight_phi->Fill(phi_1, getWeight(&pp));

		fv_eventPlane_uncorr += fv_u;
		fv_eventPlane += fv_u*getWeight(&pp);
		
		/* FLOW-VECTOR SAMPLING */
		if (itx%2 == 0) {
			fv_sample_1 += fv_u;
		} else {
			fv_sample_2 += fv_u;
		}
		
		for (int jtx = itx + 1; jtx < nTracks; jtx++) {
			track = ev->GetTrack(jtx);
			
			if (!DataTreeTrackCut(track))
			{
				continue;
			}
			
			phi_2 = track->GetPhi(ZPOSITION_INDEX);
			
			/* filling histograms */
			cosineTotalCorrelation->Fill(Cos(phi_1 - phi_2));
			
			phi1_phi2_total_correlation.push_back(Cos(phi_1 - phi_2));
			
			tracks_flag = true;
		}

	}
	
	Double_t phi1_phi2_norm = Sqrt(Abs(Mean( phi1_phi2_total_correlation.begin(), phi1_phi2_total_correlation.end() )));
	
	
	if (!tracks_flag) {
		cout << "No valid tracks for " << ev->GetEventId() << endl;
		return;
	}
	
	event_plane_corr->Fill(fv_eventPlane.Phi());
	event_plane_uncorr->Fill(fv_eventPlane_uncorr.Phi());
	event_plane_sampled->Fill(Cos(fv_sample_1.Phi() - fv_sample_2.Phi()));
	
	for (int itx = 0; itx < nTracks; itx++) {
		track = ev->GetTrack(itx);
		
		if (!DataTreeTrackCut(track)) continue;
		
		XYZVectorD pp_1 (
			track->GetPx(ZPOSITION_INDEX), 
			track->GetPy(ZPOSITION_INDEX),
			track->GetPz(ZPOSITION_INDEX)
		);
		
		
		for (int jtx = itx + 1; jtx < nTracks; jtx++) {
			track = ev->GetTrack(jtx);
			
			if (!DataTreeTrackCut(track))  continue;
			XYZVectorD pp_2 (
				track->GetPx(ZPOSITION_INDEX), 
				track->GetPy(ZPOSITION_INDEX),
				track->GetPz(ZPOSITION_INDEX)
			);
			
			Double_t vv = Cos(pp_1.Phi() - pp_2.Phi())/phi1_phi2_norm;
			flowVectorV1_pT->Fill(track->GetPt(ZPOSITION_INDEX), vv);
			flowVectorV1_eta->Fill(track->GetEta(ZPOSITION_INDEX), vv);
		}
	}
}

int main(int argc, char** argv) {
	
	if (argc < 2) {
		cerr << "No input file specified";
		return 1;
	}
	
	cout << "Processing " << argv[1] << "..." << endl;
	TFile ff(argv[1]);
	
	TTree* tree = (TTree*) ff.Get("fDataTree");
	

	tree->Process(new QnCorrectEventSelector());
	gDirectory->ls();
	tree->Process(new FVNA61EventSelector());

	return 0;

	/*
	DataTreeEvent* ev = new DataTreeEvent();
	
	auto* dtEventBranch = tree->GetBranch("DTEvent");
	dtEventBranch->SetAddress(&ev);
	
	cout << "Looping..." << endl;
	
	Long64_t nentries = tree->GetEntriesFast();
	Long64_t total_processed = 0L;
	
	cout << "Entries: " << nentries << endl;
	for (Long64_t jentry = 1; jentry < nentries; jentry++) {
		event_selector.Process(jentry);
		tree->GetEntry(jentry);
		// if (EventCut(ev, &event_cut_p)) {
			total_processed++;
			Exec(ev);
			// }
			
		}

		event_selector.Terminate();

		


		cout << "Processed " << total_processed << endl;
		
		{
			TFile _az_tot("result.root", "RECREATE");
			cosineTotalCorrelation->Write();

			event_plane_corr->Scale(1.0);
			event_plane_corr->Write();

			event_plane_uncorr->Scale(1.0);
			event_plane_uncorr->Write();
			event_plane_sampled->Write();
			
			flowVectorV1_eta->Write();
			flowVectorV1_pT->Write();
	
			azimuthal_eta->Write();
			azimuthal_pt->Write();
			phi_eta_pt->Write();

			weight_phi->Write();

			event_plane_corr->Write();
		}
		*/
	}