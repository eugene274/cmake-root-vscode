#include <iostream>

#include <TFile.h>
#include <TTree.h>
#include <TMath.h>
#include <TH1.h>
#include <TProfile.h>

#include <Math/Point3D.h>
#include <Math/Vector3D.h>

#include <DataTreeEvent.h>

#include <FlowVectorNA61EventCut.h>

using namespace std;
using namespace ROOT::Math;

const Int_t     ZPOSITION_INDEX = 0;
const Double_t  IMPACT_ZPOSITION = -581;



TH1D* cosineTotalCorrelation = new TH1D(
    "cosineTotalCorrelation", 
    "<cos(\\phi_1 - \\phi_2)>",
    100,-1,1
);

TH1D* flowVectorEventPlaneCorrelation = new TH1D(
    "flowVectorEventPlaneCorrelation",
    "\\Phi",
    100, -TMath::Pi(), TMath::Pi()
);

TH1D* flowVectorEventPlaneSampled = new TH1D(
    "flowVactorEventPlaneSampledCorr",
    "<cos(\\Phi_a - \\Phi_b)>",
    100, -1, 1
);

TProfile* flowVectorV1_eta = new TProfile("v1_eta" , "v_1", 100, 1.0, 5.0);
TProfile* flowVectorV1_pT  = new TProfile("v1_pT"  , "v_1", 100, 0.1, 1.0);

Bool_t Cut(DataTreeEvent* ev)
{
    return true;
}

inline Bool_t DataTreeTrackCut(DataTreeTrack* track) {
    /* pi- */
    if (track->GetCharge(ZPOSITION_INDEX) == -1 && track->GetPt(ZPOSITION_INDEX) < 1.0)
    
    {
        return true;
    }
    
    return false;
}

void Exec(DataTreeEvent* ev)
{
    
    
    Int_t nTracks = ev->GetNTracks();
    
    if (nTracks < 2)
    {
        return;
    }
    
    DataTreeTrack* track;
    
    Double_t phi_1;
    Double_t phi_2;
    
    RhoEtaPhiPointD fv_eventPlane;
    
    RhoEtaPhiPointD fv_sample_1;
    RhoEtaPhiPointD fv_sample_2;
    
    
    int nn = 0;
    
    for (int itx = 0; itx < nTracks; itx++) {
        track = ev->GetTrack(itx);
        
        if (!DataTreeTrackCut(track))
        {
            continue;
        }
        
        phi_1 = track->GetPhi(ZPOSITION_INDEX);
        
        
        XYZVectorD pp(
            track->GetPx(ZPOSITION_INDEX), 
            track->GetPy(ZPOSITION_INDEX),
            track->GetPz(ZPOSITION_INDEX)
        );
        
        /* TODO normal weight function*/
        XYZVectorD fv_u = pp.Unit();
        // fv_u = (track->GetPz(ZPOSITION_INDEX) > 0? 1 : -1)*fv_u;
        fv_eventPlane += fv_u;
        
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
            
            /* increment flag */
            nn++;
            
            phi_2 = track->GetPhi(ZPOSITION_INDEX);
            
            /* filling histograms */
            cosineTotalCorrelation->Fill(TMath::Cos(phi_1 - phi_2));
        }
    }
    
    
    for (int itx = 0; itx < nTracks; itx++) {
        track = ev->GetTrack(itx);
        
        if (!DataTreeTrackCut(track))
        {
            continue;
        }
        
        XYZVectorD pp(
            track->GetPx(ZPOSITION_INDEX), 
            track->GetPy(ZPOSITION_INDEX),
            track->GetPz(ZPOSITION_INDEX)
        );
        
        flowVectorV1_eta->Fill(track->GetEta(ZPOSITION_INDEX), TMath::Cos(pp.Phi() - fv_eventPlane.Phi()));
        flowVectorV1_pT->Fill(track->GetPt(ZPOSITION_INDEX), TMath::Cos(pp.Phi() - fv_eventPlane.Phi()));
    }
    
    if (nn) {
        
        flowVectorEventPlaneCorrelation->Fill(fv_eventPlane.Phi());
        flowVectorEventPlaneSampled->Fill(TMath::Cos(fv_sample_1.Phi() - fv_sample_2.Phi()));
    }
}

int main(int argc, char** argv) {
    EventCutParams_t event_cut_p = (EventCutParams_t) {
        .M = 10, 
        .z_pos_up  = (Double_t) -580.0,
        .z_pos_low = (Double_t) -582.0,
    };
    
    if (argc < 2) {
        cerr << "No input file specified";
        return 1;
    }
    
    cout << "Processing " << argv[1] << "..." << endl;
    TFile ff(argv[1]);
    
    TTree* tree = (TTree*) ff.Get("fDataTree");
    
    DataTreeEvent* ev = new DataTreeEvent();
    
    auto* dtEventBranch = tree->GetBranch("DTEvent");
    dtEventBranch->SetAddress(&ev);

    cout << "Looping..." << endl;

    Long64_t nentries = tree->GetEntriesFast();
    Long64_t total_processed = 0L;

    cout << "Entries: " << nentries << endl;
    for (Long64_t jentry = 1; jentry < nentries; jentry++) {
        tree->GetEntry(jentry);
        if (EventCut(ev, &event_cut_p)) {
            total_processed++;
            Exec(ev);
        }

    }

    cout << "Processed " << total_processed << endl;

    cosineTotalCorrelation->SaveAs("fvNA61_cosineTotalCorrelation.C");
    flowVectorEventPlaneCorrelation->SaveAs("fvNA61_eventPlaneAzimuthCorrelation.C");
    flowVectorEventPlaneSampled->SaveAs("fvNA61_eventPlaneSampledAzimuthCorr.C");

    flowVectorV1_eta->SaveAs("fvNA61_v1_eta.C");
    flowVectorV1_pT->SaveAs("fvNA61_v1_pT.C");
}