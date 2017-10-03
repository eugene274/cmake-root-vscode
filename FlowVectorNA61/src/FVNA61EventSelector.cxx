#define FVNA61EventSelector_cxx
// The class definition in FVNA61EventSelector.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("FVNA61EventSelector.C")
// root> T->Process("FVNA61EventSelector.C","some options")
// root> T->Process("FVNA61EventSelector.C+")
//


#include "FVNA61EventSelector.h"
#include "Macro.h"

#include <TH2.h>
#include <TH1.h>
#include <TStyle.h>

#include <Math/Point3D.h>
#include <Math/Vector3D.h>
#include <TMatrixD.h>
#include <TVectorD.h>

#include <iostream>


#define ZP_INDEX 0

using namespace std;
using namespace TMath;
using namespace ROOT::Math;

typedef struct {

    Bool_t flag;

    Double_t Q_Uncorrected_X;
    Double_t Q_Uncorrected_Y;
    Double_t Q_Corrected_X;
    Double_t Q_Corrected_Y;

} QVector;

QVector q_Vec;

void FVNA61EventSelector::Begin(TTree * /*tree*/)
{
    // The Begin() function is called at the start of the query.
    // When running with PROOF Begin() is only called on the client.
    // The tree argument is deprecated (on PROOF 0 is passed).
    
    TString option = GetOption();
    
    new TH1D("Total_Momentum_pT", "Total Momentum p_T", 100, 0, 4);
    new TH1D("Q_Vector_Phi", "\\Phi", 100, -TMath::Pi(), TMath::Pi());
    new TH1D("Q_Vector_Phi_Corrected_1", "\\Phi", 100, -TMath::Pi(), TMath::Pi());
    
    
    new TH1D("u_Uncorrected", "\\phi", 100, -TMath::Pi(), TMath::Pi());
    new TH1D("u_Corrected_1", "\\phi", 100, -TMath::Pi(), TMath::Pi());
    new TH2D("Q_Vector_Corrected_1_xy", "<xy>", 100, -5, 5, 100, -5, 5);
    
    TTree* q_Vec_tree = new TTree("q_Vec_tree", "Q Vectors (Corrected/Uncorrected)");
    q_Vec_tree->Branch("qVector", &q_Vec, "flag/O:Q_Uncorrected_X/D:Q_Uncorrected_Y:Q_Corrected_X:Q_Corrected_Y");
    
    
}

void FVNA61EventSelector::SlaveBegin(TTree * /*tree*/)
{
    // The SlaveBegin() function is called after the Begin() function.
    // When running with PROOF SlaveBegin() is called on each slave server.
    // The tree argument is deprecated (on PROOF 0 is passed).
    
    TString option = GetOption();
    
}

Bool_t QVCut(DataTreeTrack* track) {
    if (track->GetPt(ZP_INDEX) < 1.0) {
        return false;
    }
    
    if (track->GetEta(ZP_INDEX) > 4.0) {
        return false;
    } 
    
    return true;
}

inline void DoCorrection(XYZVectorD* src, XYZVectorD* dst) {

    Double_t data[3] = {src->X(), src->Y(), src->Z()};
    TVectorD vec(3, data);

    TVectorD* u_Correction_0 = GET(TVectorD*, "u_Correction_0");
    TMatrixD* u_Correction_1 = GET(TMatrixD*, "u_Correction_1");

    vec -= *u_Correction_0;
    vec *= *u_Correction_1;

    dst->SetCoordinates(vec(0), vec(1), vec(2));
}

Bool_t FVNA61EventSelector::Process(Long64_t entry)
{
    // The Process() function is called for each entry in the tree (or possibly
        // keyed object in the case of PROOF) to be processed. The entry argument
        // specifies which entry in the currently loaded tree is to be processed.
        // When processing keyed objects with PROOF, the object is already loaded
        // and is available via the fObject pointer.
        //
        // This function should contain the \"body\" of the analysis. It can contain
        // simple or elaborate selection criteria, run algorithms on the data
        // of the event and typically fill histograms.
        //
        // The processing can be stopped by calling Abort().
        //
        // Use fStatus to set the return value of TTree::Process().
        //
        // The return value is currently not used.
        
        fReader.SetEntry(entry);
        
        /*
        BODY
        */
        
        Int_t Multiplicity = *nTracks;
        
        if (Multiplicity < 10) {
            return kFALSE;
        }
        
        
        XYZPointD Total_Momentum;
        XYZPointD Q_Vector;
        XYZPointD Q_Vector_Corrected_0;
        XYZPointD Q_Vector_Corrected_1;
        

        TVectorD* u_Correction_0 = GET(TVectorD*, "u_Correction_0");
        TMatrixD* u_Correction_1 = GET(TMatrixD*, "u_Correction_1");

        bool QV_flag = false;
        
        for (int i = 0 ; i < Multiplicity ; i++ ) {
            DataTreeTrack* track_1 = (DataTreeTrack*) (*arrTracks).At(i);
            
            XYZVectorD Momentum_1 = {track_1->GetPx(ZP_INDEX), track_1->GetPy(ZP_INDEX), track_1->GetPz(ZP_INDEX)};
            
            Total_Momentum += Momentum_1;
            
            XYZVectorD u = {Momentum_1.X(), Momentum_1.Y(), 0.0};
            u = u.Unit();
            
            FILL(TH1D*, "u_Uncorrected", u.Phi());
            
            XYZVector u_Corrected_1;
            DoCorrection(&u, &u_Corrected_1);
            
            FILL(TH1D*, "u_Corrected_1", u.Phi());
            
            if (QVCut(track_1)) {
                QV_flag = true;
                
                Q_Vector += u;
                Q_Vector_Corrected_1 += u_Corrected_1;
            
            }

        }
        
        FILL(TH1D*,"Total_Momentum_pT", Total_Momentum.Rho());

        q_Vec.flag = false;

        if (QV_flag) {
            q_Vec.flag = true;
            q_Vec.Q_Uncorrected_X = Q_Vector.X();
            q_Vec.Q_Uncorrected_Y = Q_Vector.Y();
            q_Vec.Q_Corrected_X = Q_Vector_Corrected_1.X();
            q_Vec.Q_Corrected_Y = Q_Vector_Corrected_1.Y();

            FILL(TH1D*,"Q_Vector_Phi", Q_Vector.Phi());
            FILL(TH1D*,"Q_Vector_Phi_Corrected_1", Q_Vector_Corrected_1.Phi());
            FILL(TH2D*,"Q_Vector_Corrected_1_xy", Q_Vector_Corrected_1.X() COMMA Q_Vector_Corrected_1.Y());
        }

        GET(TTree*, "q_Vec_tree")->Fill();
        
        return kTRUE;
    }
    
    void FVNA61EventSelector::SlaveTerminate()
    {
        // The SlaveTerminate() function is called after all entries or objects
        // have been processed. When running with PROOF SlaveTerminate() is called
        // on each slave server.
        
    }
    
    void FVNA61EventSelector::Terminate()
    {
        // The Terminate() function is the last function to be called during
        // a query. It always runs on the client, it can be used to present
        // the results graphically or save the results to file.

        gDirectory->ls();

        TTree* q_Vec_tree = GET(TTree*, "q_Vec_tree");
        TFile ff("QVectors.root", "RECREATE");
        q_Vec_tree->Write();
    }