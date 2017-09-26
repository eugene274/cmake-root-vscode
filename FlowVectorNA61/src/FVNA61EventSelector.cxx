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
#include <TH2.h>
#include <TH1.h>
#include <TStyle.h>

#include <Math/Point3D.h>
#include <Math/Vector3D.h>

#include <iostream>

#define ZP_INDEX 0

using namespace std;
using namespace TMath;
using namespace ROOT::Math;

void FVNA61EventSelector::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   new TH1D("Total_Momentum_pT", "Total Momentum p_T", 100, 0, 4);
}

void FVNA61EventSelector::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

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


   for (int i = 0 ; i < Multiplicity ; i++ ) {
       DataTreeTrack* track_1 = (DataTreeTrack*) (*arrTracks).At(i);

       XYZVectorD Momentum_1 = {track_1->GetPx(ZP_INDEX), track_1->GetPy(ZP_INDEX), track_1->GetPz(ZP_INDEX)};

       Total_Momentum += Momentum_1;

       TH1D* Total_Momentum_pT = (TH1D*) gDirectory->Get("Total_Momentum_pT");
       Total_Momentum_pT->Fill(Total_Momentum.Rho());

   }

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
   
   TH1D* Total_Momentum_pT = (TH1D*) gDirectory->Get("Total_Momentum_pT");
   
   TFile* ff = new TFile("rr.root", "RECREATE");
   Total_Momentum_pT->Write();


   if (ff->IsOpen()) {
       ff->Close();
   }

}