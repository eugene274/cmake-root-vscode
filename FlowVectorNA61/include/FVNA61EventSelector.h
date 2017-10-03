//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Sep 26 21:20:14 2017 by ROOT version 6.08/06
// from TTree fDataTree/fDataTree
// found on file: DataTree_Bunch.root
//////////////////////////////////////////////////////////

#ifndef FVNA61EventSelector_h
#define FVNA61EventSelector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <Math/Vector3D.h>

// Headers needed by this particular selector
#include "DataTreeEvent.h"


class FVNA61EventSelector : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<unsigned int> fUniqueID = {fReader, "fUniqueID"};
   TTreeReaderValue<unsigned int> fBits = {fReader, "fBits"};
   TTreeReaderValue<Bool_t> ProcessFlag = {fReader, "ProcessFlag"};
   TTreeReaderValue<Int_t> RunId = {fReader, "RunId"};
   TTreeReaderValue<Int_t> EventId = {fReader, "EventId"};
   TTreeReaderValue<Double_t> EventTimestamp = {fReader, "EventTimestamp"};
   TTreeReaderArray<Double_t> VertexPosition = {fReader, "VertexPosition[2][3]"};
   TTreeReaderArray<Bool_t> HasVertex = {fReader, "HasVertex[2]"};
   TTreeReaderArray<Double_t> VertexQuality = {fReader, "VertexQuality[2]"};
   TTreeReaderArray<Double_t> MCVertexPosition = {fReader, "MCVertexPosition[3]"};
   TTreeReaderValue<Double_t> RPAngle = {fReader, "RPAngle"};
   TTreeReaderValue<Double_t> ImpactParameter = {fReader, "ImpactParameter"};
   TTreeReaderValue<Double_t> MCPSDEnergy = {fReader, "MCPSDEnergy"};
   TTreeReaderValue<Int_t> nTracks = {fReader, "nTracks"};
   TTreeReaderArray<unsigned int> arrTracks_fUniqueID = {fReader, "arrTracks.fUniqueID"};
   TTreeReaderArray<unsigned int> arrTracks_fBits = {fReader, "arrTracks.fBits"};
   TTreeReaderArray<Int_t> arrTracks_id = {fReader, "arrTracks.id"};
   TTreeReaderArray<Int_t> arrTracks_PSDModuleId = {fReader, "arrTracks.PSDModuleId"};
   TTreeReaderArray<Int_t> arrTracks_TOFHitId = {fReader, "arrTracks.TOFHitId"};
   TTreeReaderArray<Int_t> arrTracks_MCTrackId = {fReader, "arrTracks.MCTrackId"};
   TTreeReaderArray<Int_t> arrTracks_Type = {fReader, "arrTracks.Type"};
   TTreeReaderValue<Int_t> nFiredPSDModules = {fReader, "nFiredPSDModules"};
   TTreeReaderValue<Int_t> nFiredPSDSections = {fReader, "nFiredPSDSections"};
   TTreeReaderValue<Double_t> PSDEnergy = {fReader, "PSDEnergy"};
   TTreeReaderValue<Int_t> nPSDModules = {fReader, "nPSDModules"};
   TTreeReaderArray<unsigned int> arrPSDModules_fUniqueID = {fReader, "arrPSDModules.fUniqueID"};
   TTreeReaderArray<unsigned int> arrPSDModules_fBits = {fReader, "arrPSDModules.fBits"};
   TTreeReaderArray<Bool_t> arrPSDModules_ProcessFlag = {fReader, "arrPSDModules.ProcessFlag"};
   TTreeReaderArray<Int_t> arrPSDModules_nSections = {fReader, "arrPSDModules.nSections"};
   TTreeReaderArray<Int_t> arrPSDModules_SectionNumberCut = {fReader, "arrPSDModules.SectionNumberCut"};
   TTreeReaderArray<Int_t> arrPSDModules_id = {fReader, "arrPSDModules.id"};
   TTreeReaderArray<Double_t> arrPSDModules_Energy = {fReader, "arrPSDModules.Energy"};
   TTreeReaderArray<Int_t> arrPSDModules_nFiredSections = {fReader, "arrPSDModules.nFiredSections"};
   TTreeReaderValue<Int_t> nTOFHits = {fReader, "nTOFHits"};
   TTreeReaderArray<unsigned int> arrTOFHits_fUniqueID = {fReader, "arrTOFHits.fUniqueID"};
   TTreeReaderArray<unsigned int> arrTOFHits_fBits = {fReader, "arrTOFHits.fBits"};
   TTreeReaderArray<Int_t> arrTOFHits_id = {fReader, "arrTOFHits.id"};
   TTreeReaderArray<Double_t> arrTOFHits_Time = {fReader, "arrTOFHits.Time"};
   TTreeReaderArray<Double_t> arrTOFHits_Mass2 = {fReader, "arrTOFHits.Mass2"};
   TTreeReaderArray<Double_t> arrTOFHits_Length = {fReader, "arrTOFHits.Length"};
   TTreeReaderArray<Double_t> arrTOFHits_Beta = {fReader, "arrTOFHits.Beta"};
   TTreeReaderArray<Double_t> arrTOFHits_P = {fReader, "arrTOFHits.P"};
   TTreeReaderArray<Double_t> arrTOFHits_Charge = {fReader, "arrTOFHits.Charge"};
   TTreeReaderValue<Int_t> nV0CandidatesTOFpid = {fReader, "nV0CandidatesTOFpid"};
   TTreeReaderArray<Int_t> nV0SpecificCandidatesTOFpid = {fReader, "nV0SpecificCandidatesTOFpid[3]"};
   TTreeReaderArray<unsigned int> arrV0CandidatesTOFpid_fUniqueID = {fReader, "arrV0CandidatesTOFpid.fUniqueID"};
   TTreeReaderArray<unsigned int> arrV0CandidatesTOFpid_fBits = {fReader, "arrV0CandidatesTOFpid.fBits"};
   TTreeReaderArray<Int_t> arrV0CandidatesTOFpid_id = {fReader, "arrV0CandidatesTOFpid.id"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_px = {fReader, "arrV0CandidatesTOFpid.px"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_py = {fReader, "arrV0CandidatesTOFpid.py"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_pz = {fReader, "arrV0CandidatesTOFpid.pz"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_p = {fReader, "arrV0CandidatesTOFpid.p"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_pT = {fReader, "arrV0CandidatesTOFpid.pT"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_phi = {fReader, "arrV0CandidatesTOFpid.phi"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_eta = {fReader, "arrV0CandidatesTOFpid.eta"};
   TTreeReaderArray<Int_t> arrV0CandidatesTOFpid_PdgId = {fReader, "arrV0CandidatesTOFpid.PdgId"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_Mass = {fReader, "arrV0CandidatesTOFpid.Mass"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_ChiSq = {fReader, "arrV0CandidatesTOFpid.ChiSq"};
   TTreeReaderArray<Double_t> arrV0CandidatesTOFpid_Charge = {fReader, "arrV0CandidatesTOFpid.Charge"};
   TTreeReaderArray<Int_t> arrV0CandidatesTOFpid_TrackId = {fReader, "arrV0CandidatesTOFpid.TrackId"};
   TTreeReaderArray<Int_t> arrV0CandidatesTOFpid_nDaughters = {fReader, "arrV0CandidatesTOFpid.nDaughters"};
   TTreeReaderValue<Int_t> nV0CandidatesMCpid = {fReader, "nV0CandidatesMCpid"};
   TTreeReaderArray<Int_t> nV0SpecificCandidatesMCpid = {fReader, "nV0SpecificCandidatesMCpid[3]"};
   TTreeReaderArray<unsigned int> arrV0CandidatesMCpid_fUniqueID = {fReader, "arrV0CandidatesMCpid.fUniqueID"};
   TTreeReaderArray<unsigned int> arrV0CandidatesMCpid_fBits = {fReader, "arrV0CandidatesMCpid.fBits"};
   TTreeReaderArray<Int_t> arrV0CandidatesMCpid_id = {fReader, "arrV0CandidatesMCpid.id"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_px = {fReader, "arrV0CandidatesMCpid.px"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_py = {fReader, "arrV0CandidatesMCpid.py"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_pz = {fReader, "arrV0CandidatesMCpid.pz"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_p = {fReader, "arrV0CandidatesMCpid.p"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_pT = {fReader, "arrV0CandidatesMCpid.pT"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_phi = {fReader, "arrV0CandidatesMCpid.phi"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_eta = {fReader, "arrV0CandidatesMCpid.eta"};
   TTreeReaderArray<Int_t> arrV0CandidatesMCpid_PdgId = {fReader, "arrV0CandidatesMCpid.PdgId"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_Mass = {fReader, "arrV0CandidatesMCpid.Mass"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_ChiSq = {fReader, "arrV0CandidatesMCpid.ChiSq"};
   TTreeReaderArray<Double_t> arrV0CandidatesMCpid_Charge = {fReader, "arrV0CandidatesMCpid.Charge"};
   TTreeReaderArray<Int_t> arrV0CandidatesMCpid_TrackId = {fReader, "arrV0CandidatesMCpid.TrackId"};
   TTreeReaderArray<Int_t> arrV0CandidatesMCpid_nDaughters = {fReader, "arrV0CandidatesMCpid.nDaughters"};
   TTreeReaderValue<Int_t> nMCTracks = {fReader, "nMCTracks"};
   TTreeReaderArray<unsigned int> arrMCTracks_fUniqueID = {fReader, "arrMCTracks.fUniqueID"};
   TTreeReaderArray<unsigned int> arrMCTracks_fBits = {fReader, "arrMCTracks.fBits"};
   TTreeReaderArray<Int_t> arrMCTracks_id = {fReader, "arrMCTracks.id"};
   TTreeReaderArray<Bool_t> arrMCTracks_ifPrimary = {fReader, "arrMCTracks.ifPrimary"};
   TTreeReaderArray<Double_t> arrMCTracks_px = {fReader, "arrMCTracks.px"};
   TTreeReaderArray<Double_t> arrMCTracks_py = {fReader, "arrMCTracks.py"};
   TTreeReaderArray<Double_t> arrMCTracks_pz = {fReader, "arrMCTracks.pz"};
   TTreeReaderArray<Double_t> arrMCTracks_p = {fReader, "arrMCTracks.p"};
   TTreeReaderArray<Double_t> arrMCTracks_pT = {fReader, "arrMCTracks.pT"};
   TTreeReaderArray<Double_t> arrMCTracks_phi = {fReader, "arrMCTracks.phi"};
   TTreeReaderArray<Double_t> arrMCTracks_eta = {fReader, "arrMCTracks.eta"};
   TTreeReaderArray<Double_t> arrMCTracks_Rapidity = {fReader, "arrMCTracks.Rapidity"};
   TTreeReaderArray<Double_t> arrMCTracks_Energy = {fReader, "arrMCTracks.Energy"};
   TTreeReaderArray<Double_t> arrMCTracks_PdgId = {fReader, "arrMCTracks.PdgId"};
   TTreeReaderArray<Double_t> arrMCTracks_Mass = {fReader, "arrMCTracks.Mass"};
   TTreeReaderArray<Double_t> arrMCTracks_Charge = {fReader, "arrMCTracks.Charge"};
   TTreeReaderArray<Int_t> arrMCTracks_MotherId = {fReader, "arrMCTracks.MotherId"};
   TTreeReaderArray<Double_t> arrMCTracks_TOF_pT = {fReader, "arrMCTracks.TOF_pT"};
   TTreeReaderArray<Double_t> arrMCTracks_TOF_phi = {fReader, "arrMCTracks.TOF_phi"};
   TTreeReaderArray<Double_t> arrMCTracks_TOF_eta = {fReader, "arrMCTracks.TOF_eta"};
   TTreeReaderArray<Double_t> arrMCTracks_PSD_pT = {fReader, "arrMCTracks.PSD_pT"};
   TTreeReaderArray<Double_t> arrMCTracks_PSD_phi = {fReader, "arrMCTracks.PSD_phi"};
   TTreeReaderArray<Double_t> arrMCTracks_PSD_eta = {fReader, "arrMCTracks.PSD_eta"};
   TTreeReaderArray<Double_t> arrMCTracks_PSDEnergy = {fReader, "arrMCTracks.PSDEnergy"};
   TTreeReaderArray<Int_t> arrMCTracks_TrackId = {fReader, "arrMCTracks.TrackId"};
   TTreeReaderArray<Int_t> arrMCTracks_PSDSectionId = {fReader, "arrMCTracks.PSDSectionId"};
   TTreeReaderArray<Int_t> arrMCTracks_TOFSegmentId = {fReader, "arrMCTracks.TOFSegmentId"};
   TTreeReaderValue<Int_t> nTriggers = {fReader, "nTriggers"};
   TTreeReaderArray<unsigned int> arrTriggers_fUniqueID = {fReader, "arrTriggers.fUniqueID"};
   TTreeReaderArray<unsigned int> arrTriggers_fBits = {fReader, "arrTriggers.fBits"};
   TTreeReaderArray<Int_t> arrTriggers_id = {fReader, "arrTriggers.id"};
   TTreeReaderArray<Double_t> arrTriggers_Signal = {fReader, "arrTriggers.Signal"};
   TTreeReaderArray<Bool_t> arrTriggers_isSignal = {fReader, "arrTriggers.isSignal"};
//    TTreeReaderArray<TString> arrTriggers_Label = {fReader, "arrTriggers.Label"};
   TTreeReaderValue<Int_t> nBPDs = {fReader, "nBPDs"};
   TTreeReaderArray<unsigned int> arrBPDs_fUniqueID = {fReader, "arrBPDs.fUniqueID"};
   TTreeReaderArray<unsigned int> arrBPDs_fBits = {fReader, "arrBPDs.fBits"};
   TTreeReaderArray<Int_t> arrBPDs_id = {fReader, "arrBPDs.id"};
   TTreeReaderValue<Int_t> nWFAs = {fReader, "nWFAs"};
   TTreeReaderArray<unsigned int> arrWFAs_fUniqueID = {fReader, "arrWFAs.fUniqueID"};
   TTreeReaderArray<unsigned int> arrWFAs_fBits = {fReader, "arrWFAs.fBits"};
   TTreeReaderArray<Int_t> arrWFAs_id = {fReader, "arrWFAs.id"};

   /* */
   TTreeReaderValue<TClonesArray> arrTracks = {fReader, "arrTracks"};
   
   FVNA61EventSelector(TTree * /*tree*/ =0) { }
   virtual ~FVNA61EventSelector() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

//   ClassDef(FVNA61EventSelector,0);

};

#endif

#ifdef FVNA61EventSelector_cxx
void FVNA61EventSelector::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t FVNA61EventSelector::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef FVNA61EventSelector_cxx
