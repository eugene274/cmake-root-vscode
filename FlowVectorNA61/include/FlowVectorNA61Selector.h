//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Sep  9 14:29:40 2017 by ROOT version 6.08/06
// from TTree fDataTree/fDataTree
// found on file: DataTree_Bunch.root
//////////////////////////////////////////////////////////

#ifndef FlowVectorNA61Selector_h
#define FlowVectorNA61Selector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <DataTreeEvent.h>
#include <TObject.h>
#include <DataTreeTrack.h>
#include <DataTreePSDModule.h>
#include <DataTreeTOFHit.h>
#include <DataTreeV0Candidate.h>
#include <DataTreeMCTrack.h>
#include <DataTreeTrigger.h>
#include <DataTreeBPD.h>
#include <DataTreeWFA.h>

class FlowVectorNA61Selector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static const Int_t kMaxarrTracks = 364;
   static const Int_t kMaxarrPSDModules = 45;
   static const Int_t kMaxarrTOFHits = 1;
   static const Int_t kMaxarrV0CandidatesTOFpid = 1;
   static const Int_t kMaxarrV0CandidatesMCpid = 1;
   static const Int_t kMaxarrMCTracks = 1;
   static const Int_t kMaxarrTriggers = 8;
   static const Int_t kMaxarrBPDs = 3;
   static const Int_t kMaxarrWFAs = 6;

   // Declaration of leaf types
 //DataTreeEvent   *DTEvent;
   UInt_t          fUniqueID;
   UInt_t          fBits;
   Bool_t          ProcessFlag;
   Int_t           RunId;
   Int_t           EventId;
   Double_t        EventTimestamp;
   Double_t        VertexPosition[2][3];
   Bool_t          HasVertex[2];
   Double_t        VertexQuality[2];
   Double_t        MCVertexPosition[3];
   Double_t        RPAngle;
   Double_t        ImpactParameter;
   Double_t        MCPSDEnergy;
   Int_t           nTracks;
   Int_t           arrTracks_;
   UInt_t          arrTracks_fUniqueID[kMaxarrTracks];   //[arrTracks_]
   UInt_t          arrTracks_fBits[kMaxarrTracks];   //[arrTracks_]
   Int_t           arrTracks_id[kMaxarrTracks];   //[arrTracks_]
   Double_t        arrTracks_pT[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_phi[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_eta[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_px[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_py[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_pz[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_p[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_Rapidity[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_Energy[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_Charge[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_Point[kMaxarrTracks][4][3];   //[arrTracks_]
   Double_t        arrTracks_extP[kMaxarrTracks][4][3];   //[arrTracks_]
   Double_t        arrTracks_extPoint[kMaxarrTracks][4][3];   //[arrTracks_]
   Double_t        arrTracks_trackPoint[kMaxarrTracks][4][3];   //[arrTracks_]
   Double_t        arrTracks_testP[kMaxarrTracks][4][3];   //[arrTracks_]
   Double_t        arrTracks_testPoint[kMaxarrTracks][4][3];   //[arrTracks_]
   Int_t           arrTracks_NofHits[kMaxarrTracks][4][5];   //[arrTracks_]
   Int_t           arrTracks_NofHitsPotential[kMaxarrTracks][4][5];   //[arrTracks_]
   Double_t        arrTracks_dEdx[kMaxarrTracks][4][5];   //[arrTracks_]
   Int_t           arrTracks_Flag[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_ChiSq[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_VtxChiSq[kMaxarrTracks][4];   //[arrTracks_]
   Int_t           arrTracks_NDF[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_DCA[kMaxarrTracks][4][3];   //[arrTracks_]
   Bool_t          arrTracks_Stations[kMaxarrTracks][4][8];   //[arrTracks_]
   Int_t           arrTracks_nStations[kMaxarrTracks][4];   //[arrTracks_]
   Int_t           arrTracks_nSTSHitsPossible[kMaxarrTracks][4];   //[arrTracks_]
   Double_t        arrTracks_LengthInSTS[kMaxarrTracks][4];   //[arrTracks_]
   Int_t           arrTracks_PSDModuleId[kMaxarrTracks];   //[arrTracks_]
   Int_t           arrTracks_TOFHitId[kMaxarrTracks];   //[arrTracks_]
   Int_t           arrTracks_MCTrackId[kMaxarrTracks];   //[arrTracks_]
   Int_t           arrTracks_Type[kMaxarrTracks];   //[arrTracks_]
   Int_t           nFiredPSDModules;
   Int_t           nFiredPSDSections;
   Double_t        PSDEnergy;
   Int_t           nPSDModules;
   Int_t           arrPSDModules_;
   UInt_t          arrPSDModules_fUniqueID[kMaxarrPSDModules];   //[arrPSDModules_]
   UInt_t          arrPSDModules_fBits[kMaxarrPSDModules];   //[arrPSDModules_]
   Bool_t          arrPSDModules_ProcessFlag[kMaxarrPSDModules];   //[arrPSDModules_]
   Int_t           arrPSDModules_nSections[kMaxarrPSDModules];   //[arrPSDModules_]
   Int_t           arrPSDModules_SectionNumberCut[kMaxarrPSDModules];   //[arrPSDModules_]
   Int_t           arrPSDModules_id[kMaxarrPSDModules];   //[arrPSDModules_]
   Double_t        arrPSDModules_Position[kMaxarrPSDModules][3];   //[arrPSDModules_]
   Double_t        arrPSDModules_Energy[kMaxarrPSDModules];   //[arrPSDModules_]
   Int_t           arrPSDModules_nFiredSections[kMaxarrPSDModules];   //[arrPSDModules_]
   Int_t           nTOFHits;
   Int_t           arrTOFHits_;
   UInt_t          arrTOFHits_fUniqueID[kMaxarrTOFHits];   //[arrTOFHits_]
   UInt_t          arrTOFHits_fBits[kMaxarrTOFHits];   //[arrTOFHits_]
   Int_t           arrTOFHits_id[kMaxarrTOFHits];   //[arrTOFHits_]
   Double_t        arrTOFHits_Position[kMaxarrTOFHits][3];   //[arrTOFHits_]
   Double_t        arrTOFHits_Time[kMaxarrTOFHits];   //[arrTOFHits_]
   Double_t        arrTOFHits_Mass2[kMaxarrTOFHits];   //[arrTOFHits_]
   Double_t        arrTOFHits_Length[kMaxarrTOFHits];   //[arrTOFHits_]
   Double_t        arrTOFHits_Beta[kMaxarrTOFHits];   //[arrTOFHits_]
   Double_t        arrTOFHits_P[kMaxarrTOFHits];   //[arrTOFHits_]
   Double_t        arrTOFHits_Charge[kMaxarrTOFHits];   //[arrTOFHits_]
   Int_t           nV0CandidatesTOFpid;
   Int_t           nV0SpecificCandidatesTOFpid[3];
   Int_t           arrV0CandidatesTOFpid_;
   UInt_t          arrV0CandidatesTOFpid_fUniqueID[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   UInt_t          arrV0CandidatesTOFpid_fBits[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Int_t           arrV0CandidatesTOFpid_id[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_px[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_py[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_pz[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_p[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_pT[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_phi[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_eta[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Int_t           arrV0CandidatesTOFpid_PdgId[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_Mass[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_ChiSq[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Double_t        arrV0CandidatesTOFpid_Charge[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Int_t           arrV0CandidatesTOFpid_TrackId[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Int_t           arrV0CandidatesTOFpid_nDaughters[kMaxarrV0CandidatesTOFpid];   //[arrV0CandidatesTOFpid_]
   Int_t           nV0CandidatesMCpid;
   Int_t           nV0SpecificCandidatesMCpid[3];
   Int_t           arrV0CandidatesMCpid_;
   UInt_t          arrV0CandidatesMCpid_fUniqueID[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   UInt_t          arrV0CandidatesMCpid_fBits[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Int_t           arrV0CandidatesMCpid_id[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_px[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_py[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_pz[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_p[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_pT[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_phi[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_eta[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Int_t           arrV0CandidatesMCpid_PdgId[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_Mass[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_ChiSq[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Double_t        arrV0CandidatesMCpid_Charge[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Int_t           arrV0CandidatesMCpid_TrackId[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Int_t           arrV0CandidatesMCpid_nDaughters[kMaxarrV0CandidatesMCpid];   //[arrV0CandidatesMCpid_]
   Int_t           nMCTracks;
   Int_t           arrMCTracks_;
   UInt_t          arrMCTracks_fUniqueID[kMaxarrMCTracks];   //[arrMCTracks_]
   UInt_t          arrMCTracks_fBits[kMaxarrMCTracks];   //[arrMCTracks_]
   Int_t           arrMCTracks_id[kMaxarrMCTracks];   //[arrMCTracks_]
   Bool_t          arrMCTracks_ifPrimary[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_px[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_py[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_pz[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_p[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_pT[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_phi[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_eta[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_Rapidity[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_Energy[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_PdgId[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_Mass[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_Charge[kMaxarrMCTracks];   //[arrMCTracks_]
   Int_t           arrMCTracks_MotherId[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_TOFPosition[kMaxarrMCTracks][3];   //[arrMCTracks_]
   Double_t        arrMCTracks_TOF_pT[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_TOF_phi[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_TOF_eta[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_PSDPosition[kMaxarrMCTracks][3];   //[arrMCTracks_]
   Double_t        arrMCTracks_PSD_pT[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_PSD_phi[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_PSD_eta[kMaxarrMCTracks];   //[arrMCTracks_]
   Double_t        arrMCTracks_PSDEnergy[kMaxarrMCTracks];   //[arrMCTracks_]
   Int_t           arrMCTracks_TrackId[kMaxarrMCTracks];   //[arrMCTracks_]
   Int_t           arrMCTracks_PSDSectionId[kMaxarrMCTracks];   //[arrMCTracks_]
   Int_t           arrMCTracks_TOFSegmentId[kMaxarrMCTracks];   //[arrMCTracks_]
   Int_t           nTriggers;
   Int_t           arrTriggers_;
   UInt_t          arrTriggers_fUniqueID[kMaxarrTriggers];   //[arrTriggers_]
   UInt_t          arrTriggers_fBits[kMaxarrTriggers];   //[arrTriggers_]
   Int_t           arrTriggers_id[kMaxarrTriggers];   //[arrTriggers_]
   Double_t        arrTriggers_Signal[kMaxarrTriggers];   //[arrTriggers_]
   Bool_t          arrTriggers_isSignal[kMaxarrTriggers];   //[arrTriggers_]
   TString         arrTriggers_Label[kMaxarrTriggers];
   Int_t           nBPDs;
   Int_t           arrBPDs_;
   UInt_t          arrBPDs_fUniqueID[kMaxarrBPDs];   //[arrBPDs_]
   UInt_t          arrBPDs_fBits[kMaxarrBPDs];   //[arrBPDs_]
   Int_t           arrBPDs_id[kMaxarrBPDs];   //[arrBPDs_]
   Double_t        arrBPDs_Position[kMaxarrBPDs][3];   //[arrBPDs_]
   Int_t           nWFAs;
   Int_t           arrWFAs_;
   UInt_t          arrWFAs_fUniqueID[kMaxarrWFAs];   //[arrWFAs_]
   UInt_t          arrWFAs_fBits[kMaxarrWFAs];   //[arrWFAs_]
   Float_t         arrWFAs_TimeWFA[kMaxarrWFAs][6][2000];   //[arrWFAs_]
   Int_t           arrWFAs_NHits[kMaxarrWFAs][6];   //[arrWFAs_]
   Int_t           arrWFAs_id[kMaxarrWFAs];   //[arrWFAs_]

   // List of branches
   TBranch        *b_DTEvent_fUniqueID;   //!
   TBranch        *b_DTEvent_fBits;   //!
   TBranch        *b_DTEvent_ProcessFlag;   //!
   TBranch        *b_DTEvent_RunId;   //!
   TBranch        *b_DTEvent_EventId;   //!
   TBranch        *b_DTEvent_EventTimestamp;   //!
   TBranch        *b_DTEvent_VertexPosition;   //!
   TBranch        *b_DTEvent_HasVertex;   //!
   TBranch        *b_DTEvent_VertexQuality;   //!
   TBranch        *b_DTEvent_MCVertexPosition;   //!
   TBranch        *b_DTEvent_RPAngle;   //!
   TBranch        *b_DTEvent_ImpactParameter;   //!
   TBranch        *b_DTEvent_MCPSDEnergy;   //!
   TBranch        *b_DTEvent_nTracks;   //!
   TBranch        *b_DTEvent_arrTracks_;   //!
   TBranch        *b_arrTracks_fUniqueID;   //!
   TBranch        *b_arrTracks_fBits;   //!
   TBranch        *b_arrTracks_id;   //!
   TBranch        *b_arrTracks_pT;   //!
   TBranch        *b_arrTracks_phi;   //!
   TBranch        *b_arrTracks_eta;   //!
   TBranch        *b_arrTracks_px;   //!
   TBranch        *b_arrTracks_py;   //!
   TBranch        *b_arrTracks_pz;   //!
   TBranch        *b_arrTracks_p;   //!
   TBranch        *b_arrTracks_Rapidity;   //!
   TBranch        *b_arrTracks_Energy;   //!
   TBranch        *b_arrTracks_Charge;   //!
   TBranch        *b_arrTracks_Point;   //!
   TBranch        *b_arrTracks_extP;   //!
   TBranch        *b_arrTracks_extPoint;   //!
   TBranch        *b_arrTracks_trackPoint;   //!
   TBranch        *b_arrTracks_testP;   //!
   TBranch        *b_arrTracks_testPoint;   //!
   TBranch        *b_arrTracks_NofHits;   //!
   TBranch        *b_arrTracks_NofHitsPotential;   //!
   TBranch        *b_arrTracks_dEdx;   //!
   TBranch        *b_arrTracks_Flag;   //!
   TBranch        *b_arrTracks_ChiSq;   //!
   TBranch        *b_arrTracks_VtxChiSq;   //!
   TBranch        *b_arrTracks_NDF;   //!
   TBranch        *b_arrTracks_DCA;   //!
   TBranch        *b_arrTracks_Stations;   //!
   TBranch        *b_arrTracks_nStations;   //!
   TBranch        *b_arrTracks_nSTSHitsPossible;   //!
   TBranch        *b_arrTracks_LengthInSTS;   //!
   TBranch        *b_arrTracks_PSDModuleId;   //!
   TBranch        *b_arrTracks_TOFHitId;   //!
   TBranch        *b_arrTracks_MCTrackId;   //!
   TBranch        *b_arrTracks_Type;   //!
   TBranch        *b_DTEvent_nFiredPSDModules;   //!
   TBranch        *b_DTEvent_nFiredPSDSections;   //!
   TBranch        *b_DTEvent_PSDEnergy;   //!
   TBranch        *b_DTEvent_nPSDModules;   //!
   TBranch        *b_DTEvent_arrPSDModules_;   //!
   TBranch        *b_arrPSDModules_fUniqueID;   //!
   TBranch        *b_arrPSDModules_fBits;   //!
   TBranch        *b_arrPSDModules_ProcessFlag;   //!
   TBranch        *b_arrPSDModules_nSections;   //!
   TBranch        *b_arrPSDModules_SectionNumberCut;   //!
   TBranch        *b_arrPSDModules_id;   //!
   TBranch        *b_arrPSDModules_Position;   //!
   TBranch        *b_arrPSDModules_Energy;   //!
   TBranch        *b_arrPSDModules_nFiredSections;   //!
   TBranch        *b_DTEvent_nTOFHits;   //!
   TBranch        *b_DTEvent_arrTOFHits_;   //!
   TBranch        *b_arrTOFHits_fUniqueID;   //!
   TBranch        *b_arrTOFHits_fBits;   //!
   TBranch        *b_arrTOFHits_id;   //!
   TBranch        *b_arrTOFHits_Position;   //!
   TBranch        *b_arrTOFHits_Time;   //!
   TBranch        *b_arrTOFHits_Mass2;   //!
   TBranch        *b_arrTOFHits_Length;   //!
   TBranch        *b_arrTOFHits_Beta;   //!
   TBranch        *b_arrTOFHits_P;   //!
   TBranch        *b_arrTOFHits_Charge;   //!
   TBranch        *b_DTEvent_nV0CandidatesTOFpid;   //!
   TBranch        *b_DTEvent_nV0SpecificCandidatesTOFpid;   //!
   TBranch        *b_DTEvent_arrV0CandidatesTOFpid_;   //!
   TBranch        *b_arrV0CandidatesTOFpid_fUniqueID;   //!
   TBranch        *b_arrV0CandidatesTOFpid_fBits;   //!
   TBranch        *b_arrV0CandidatesTOFpid_id;   //!
   TBranch        *b_arrV0CandidatesTOFpid_px;   //!
   TBranch        *b_arrV0CandidatesTOFpid_py;   //!
   TBranch        *b_arrV0CandidatesTOFpid_pz;   //!
   TBranch        *b_arrV0CandidatesTOFpid_p;   //!
   TBranch        *b_arrV0CandidatesTOFpid_pT;   //!
   TBranch        *b_arrV0CandidatesTOFpid_phi;   //!
   TBranch        *b_arrV0CandidatesTOFpid_eta;   //!
   TBranch        *b_arrV0CandidatesTOFpid_PdgId;   //!
   TBranch        *b_arrV0CandidatesTOFpid_Mass;   //!
   TBranch        *b_arrV0CandidatesTOFpid_ChiSq;   //!
   TBranch        *b_arrV0CandidatesTOFpid_Charge;   //!
   TBranch        *b_arrV0CandidatesTOFpid_TrackId;   //!
   TBranch        *b_arrV0CandidatesTOFpid_nDaughters;   //!
   TBranch        *b_DTEvent_nV0CandidatesMCpid;   //!
   TBranch        *b_DTEvent_nV0SpecificCandidatesMCpid;   //!
   TBranch        *b_DTEvent_arrV0CandidatesMCpid_;   //!
   TBranch        *b_arrV0CandidatesMCpid_fUniqueID;   //!
   TBranch        *b_arrV0CandidatesMCpid_fBits;   //!
   TBranch        *b_arrV0CandidatesMCpid_id;   //!
   TBranch        *b_arrV0CandidatesMCpid_px;   //!
   TBranch        *b_arrV0CandidatesMCpid_py;   //!
   TBranch        *b_arrV0CandidatesMCpid_pz;   //!
   TBranch        *b_arrV0CandidatesMCpid_p;   //!
   TBranch        *b_arrV0CandidatesMCpid_pT;   //!
   TBranch        *b_arrV0CandidatesMCpid_phi;   //!
   TBranch        *b_arrV0CandidatesMCpid_eta;   //!
   TBranch        *b_arrV0CandidatesMCpid_PdgId;   //!
   TBranch        *b_arrV0CandidatesMCpid_Mass;   //!
   TBranch        *b_arrV0CandidatesMCpid_ChiSq;   //!
   TBranch        *b_arrV0CandidatesMCpid_Charge;   //!
   TBranch        *b_arrV0CandidatesMCpid_TrackId;   //!
   TBranch        *b_arrV0CandidatesMCpid_nDaughters;   //!
   TBranch        *b_DTEvent_nMCTracks;   //!
   TBranch        *b_DTEvent_arrMCTracks_;   //!
   TBranch        *b_arrMCTracks_fUniqueID;   //!
   TBranch        *b_arrMCTracks_fBits;   //!
   TBranch        *b_arrMCTracks_id;   //!
   TBranch        *b_arrMCTracks_ifPrimary;   //!
   TBranch        *b_arrMCTracks_px;   //!
   TBranch        *b_arrMCTracks_py;   //!
   TBranch        *b_arrMCTracks_pz;   //!
   TBranch        *b_arrMCTracks_p;   //!
   TBranch        *b_arrMCTracks_pT;   //!
   TBranch        *b_arrMCTracks_phi;   //!
   TBranch        *b_arrMCTracks_eta;   //!
   TBranch        *b_arrMCTracks_Rapidity;   //!
   TBranch        *b_arrMCTracks_Energy;   //!
   TBranch        *b_arrMCTracks_PdgId;   //!
   TBranch        *b_arrMCTracks_Mass;   //!
   TBranch        *b_arrMCTracks_Charge;   //!
   TBranch        *b_arrMCTracks_MotherId;   //!
   TBranch        *b_arrMCTracks_TOFPosition;   //!
   TBranch        *b_arrMCTracks_TOF_pT;   //!
   TBranch        *b_arrMCTracks_TOF_phi;   //!
   TBranch        *b_arrMCTracks_TOF_eta;   //!
   TBranch        *b_arrMCTracks_PSDPosition;   //!
   TBranch        *b_arrMCTracks_PSD_pT;   //!
   TBranch        *b_arrMCTracks_PSD_phi;   //!
   TBranch        *b_arrMCTracks_PSD_eta;   //!
   TBranch        *b_arrMCTracks_PSDEnergy;   //!
   TBranch        *b_arrMCTracks_TrackId;   //!
   TBranch        *b_arrMCTracks_PSDSectionId;   //!
   TBranch        *b_arrMCTracks_TOFSegmentId;   //!
   TBranch        *b_DTEvent_nTriggers;   //!
   TBranch        *b_DTEvent_arrTriggers_;   //!
   TBranch        *b_arrTriggers_fUniqueID;   //!
   TBranch        *b_arrTriggers_fBits;   //!
   TBranch        *b_arrTriggers_id;   //!
   TBranch        *b_arrTriggers_Signal;   //!
   TBranch        *b_arrTriggers_isSignal;   //!
   TBranch        *b_arrTriggers_Label;   //!
   TBranch        *b_DTEvent_nBPDs;   //!
   TBranch        *b_DTEvent_arrBPDs_;   //!
   TBranch        *b_arrBPDs_fUniqueID;   //!
   TBranch        *b_arrBPDs_fBits;   //!
   TBranch        *b_arrBPDs_id;   //!
   TBranch        *b_arrBPDs_Position;   //!
   TBranch        *b_DTEvent_nWFAs;   //!
   TBranch        *b_DTEvent_arrWFAs_;   //!
   TBranch        *b_arrWFAs_fUniqueID;   //!
   TBranch        *b_arrWFAs_fBits;   //!
   TBranch        *b_arrWFAs_TimeWFA;   //!
   TBranch        *b_arrWFAs_NHits;   //!
   TBranch        *b_arrWFAs_id;   //!

   FlowVectorNA61Selector(TTree *tree=0);
   virtual ~FlowVectorNA61Selector();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FlowVectorNA61Selector_cxx
FlowVectorNA61Selector::FlowVectorNA61Selector(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("DataTree_Bunch.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("DataTree_Bunch.root");
      }
      f->GetObject("fDataTree",tree);

   }
   Init(tree);
}

FlowVectorNA61Selector::~FlowVectorNA61Selector()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FlowVectorNA61Selector::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FlowVectorNA61Selector::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void FlowVectorNA61Selector::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("fUniqueID", &fUniqueID, &b_DTEvent_fUniqueID);
   fChain->SetBranchAddress("fBits", &fBits, &b_DTEvent_fBits);
   fChain->SetBranchAddress("ProcessFlag", &ProcessFlag, &b_DTEvent_ProcessFlag);
   fChain->SetBranchAddress("RunId", &RunId, &b_DTEvent_RunId);
   fChain->SetBranchAddress("EventId", &EventId, &b_DTEvent_EventId);
   fChain->SetBranchAddress("EventTimestamp", &EventTimestamp, &b_DTEvent_EventTimestamp);
   fChain->SetBranchAddress("VertexPosition[2][3]", VertexPosition, &b_DTEvent_VertexPosition);
   fChain->SetBranchAddress("HasVertex[2]", HasVertex, &b_DTEvent_HasVertex);
   fChain->SetBranchAddress("VertexQuality[2]", VertexQuality, &b_DTEvent_VertexQuality);
   fChain->SetBranchAddress("MCVertexPosition[3]", MCVertexPosition, &b_DTEvent_MCVertexPosition);
   fChain->SetBranchAddress("RPAngle", &RPAngle, &b_DTEvent_RPAngle);
   fChain->SetBranchAddress("ImpactParameter", &ImpactParameter, &b_DTEvent_ImpactParameter);
   fChain->SetBranchAddress("MCPSDEnergy", &MCPSDEnergy, &b_DTEvent_MCPSDEnergy);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_DTEvent_nTracks);
   fChain->SetBranchAddress("arrTracks", &arrTracks_, &b_DTEvent_arrTracks_);
   fChain->SetBranchAddress("arrTracks.fUniqueID", arrTracks_fUniqueID, &b_arrTracks_fUniqueID);
   fChain->SetBranchAddress("arrTracks.fBits", arrTracks_fBits, &b_arrTracks_fBits);
   fChain->SetBranchAddress("arrTracks.id", arrTracks_id, &b_arrTracks_id);
   fChain->SetBranchAddress("arrTracks.pT[4]", arrTracks_pT, &b_arrTracks_pT);
   fChain->SetBranchAddress("arrTracks.phi[4]", arrTracks_phi, &b_arrTracks_phi);
   fChain->SetBranchAddress("arrTracks.eta[4]", arrTracks_eta, &b_arrTracks_eta);
   fChain->SetBranchAddress("arrTracks.px[4]", arrTracks_px, &b_arrTracks_px);
   fChain->SetBranchAddress("arrTracks.py[4]", arrTracks_py, &b_arrTracks_py);
   fChain->SetBranchAddress("arrTracks.pz[4]", arrTracks_pz, &b_arrTracks_pz);
   fChain->SetBranchAddress("arrTracks.p[4]", arrTracks_p, &b_arrTracks_p);
   fChain->SetBranchAddress("arrTracks.Rapidity[4]", arrTracks_Rapidity, &b_arrTracks_Rapidity);
   fChain->SetBranchAddress("arrTracks.Energy[4]", arrTracks_Energy, &b_arrTracks_Energy);
   fChain->SetBranchAddress("arrTracks.Charge[4]", arrTracks_Charge, &b_arrTracks_Charge);
   fChain->SetBranchAddress("arrTracks.Point[4][3]", arrTracks_Point, &b_arrTracks_Point);
   fChain->SetBranchAddress("arrTracks.extP[4][3]", arrTracks_extP, &b_arrTracks_extP);
   fChain->SetBranchAddress("arrTracks.extPoint[4][3]", arrTracks_extPoint, &b_arrTracks_extPoint);
   fChain->SetBranchAddress("arrTracks.trackPoint[4][3]", arrTracks_trackPoint, &b_arrTracks_trackPoint);
   fChain->SetBranchAddress("arrTracks.testP[4][3]", arrTracks_testP, &b_arrTracks_testP);
   fChain->SetBranchAddress("arrTracks.testPoint[4][3]", arrTracks_testPoint, &b_arrTracks_testPoint);
   fChain->SetBranchAddress("arrTracks.NofHits[4][5]", arrTracks_NofHits, &b_arrTracks_NofHits);
   fChain->SetBranchAddress("arrTracks.NofHitsPotential[4][5]", arrTracks_NofHitsPotential, &b_arrTracks_NofHitsPotential);
   fChain->SetBranchAddress("arrTracks.dEdx[4][5]", arrTracks_dEdx, &b_arrTracks_dEdx);
   fChain->SetBranchAddress("arrTracks.Flag[4]", arrTracks_Flag, &b_arrTracks_Flag);
   fChain->SetBranchAddress("arrTracks.ChiSq[4]", arrTracks_ChiSq, &b_arrTracks_ChiSq);
   fChain->SetBranchAddress("arrTracks.VtxChiSq[4]", arrTracks_VtxChiSq, &b_arrTracks_VtxChiSq);
   fChain->SetBranchAddress("arrTracks.NDF[4]", arrTracks_NDF, &b_arrTracks_NDF);
   fChain->SetBranchAddress("arrTracks.DCA[4][3]", arrTracks_DCA, &b_arrTracks_DCA);
   fChain->SetBranchAddress("arrTracks.Stations[4][8]", arrTracks_Stations, &b_arrTracks_Stations);
   fChain->SetBranchAddress("arrTracks.nStations[4]", arrTracks_nStations, &b_arrTracks_nStations);
   fChain->SetBranchAddress("arrTracks.nSTSHitsPossible[4]", arrTracks_nSTSHitsPossible, &b_arrTracks_nSTSHitsPossible);
   fChain->SetBranchAddress("arrTracks.LengthInSTS[4]", arrTracks_LengthInSTS, &b_arrTracks_LengthInSTS);
   fChain->SetBranchAddress("arrTracks.PSDModuleId", arrTracks_PSDModuleId, &b_arrTracks_PSDModuleId);
   fChain->SetBranchAddress("arrTracks.TOFHitId", arrTracks_TOFHitId, &b_arrTracks_TOFHitId);
   fChain->SetBranchAddress("arrTracks.MCTrackId", arrTracks_MCTrackId, &b_arrTracks_MCTrackId);
   fChain->SetBranchAddress("arrTracks.Type", arrTracks_Type, &b_arrTracks_Type);
   fChain->SetBranchAddress("nFiredPSDModules", &nFiredPSDModules, &b_DTEvent_nFiredPSDModules);
   fChain->SetBranchAddress("nFiredPSDSections", &nFiredPSDSections, &b_DTEvent_nFiredPSDSections);
   fChain->SetBranchAddress("PSDEnergy", &PSDEnergy, &b_DTEvent_PSDEnergy);
   fChain->SetBranchAddress("nPSDModules", &nPSDModules, &b_DTEvent_nPSDModules);
   fChain->SetBranchAddress("arrPSDModules", &arrPSDModules_, &b_DTEvent_arrPSDModules_);
   fChain->SetBranchAddress("arrPSDModules.fUniqueID", arrPSDModules_fUniqueID, &b_arrPSDModules_fUniqueID);
   fChain->SetBranchAddress("arrPSDModules.fBits", arrPSDModules_fBits, &b_arrPSDModules_fBits);
   fChain->SetBranchAddress("arrPSDModules.ProcessFlag", arrPSDModules_ProcessFlag, &b_arrPSDModules_ProcessFlag);
   fChain->SetBranchAddress("arrPSDModules.nSections", arrPSDModules_nSections, &b_arrPSDModules_nSections);
   fChain->SetBranchAddress("arrPSDModules.SectionNumberCut", arrPSDModules_SectionNumberCut, &b_arrPSDModules_SectionNumberCut);
   fChain->SetBranchAddress("arrPSDModules.id", arrPSDModules_id, &b_arrPSDModules_id);
   fChain->SetBranchAddress("arrPSDModules.Position[3]", arrPSDModules_Position, &b_arrPSDModules_Position);
   fChain->SetBranchAddress("arrPSDModules.Energy", arrPSDModules_Energy, &b_arrPSDModules_Energy);
   fChain->SetBranchAddress("arrPSDModules.nFiredSections", arrPSDModules_nFiredSections, &b_arrPSDModules_nFiredSections);
   fChain->SetBranchAddress("nTOFHits", &nTOFHits, &b_DTEvent_nTOFHits);
   fChain->SetBranchAddress("arrTOFHits", &arrTOFHits_, &b_DTEvent_arrTOFHits_);
   fChain->SetBranchAddress("arrTOFHits.fUniqueID", &arrTOFHits_fUniqueID, &b_arrTOFHits_fUniqueID);
   fChain->SetBranchAddress("arrTOFHits.fBits", &arrTOFHits_fBits, &b_arrTOFHits_fBits);
   fChain->SetBranchAddress("arrTOFHits.id", &arrTOFHits_id, &b_arrTOFHits_id);
   fChain->SetBranchAddress("arrTOFHits.Position[3]", &arrTOFHits_Position, &b_arrTOFHits_Position);
   fChain->SetBranchAddress("arrTOFHits.Time", &arrTOFHits_Time, &b_arrTOFHits_Time);
   fChain->SetBranchAddress("arrTOFHits.Mass2", &arrTOFHits_Mass2, &b_arrTOFHits_Mass2);
   fChain->SetBranchAddress("arrTOFHits.Length", &arrTOFHits_Length, &b_arrTOFHits_Length);
   fChain->SetBranchAddress("arrTOFHits.Beta", &arrTOFHits_Beta, &b_arrTOFHits_Beta);
   fChain->SetBranchAddress("arrTOFHits.P", &arrTOFHits_P, &b_arrTOFHits_P);
   fChain->SetBranchAddress("arrTOFHits.Charge", &arrTOFHits_Charge, &b_arrTOFHits_Charge);
   fChain->SetBranchAddress("nV0CandidatesTOFpid", &nV0CandidatesTOFpid, &b_DTEvent_nV0CandidatesTOFpid);
   fChain->SetBranchAddress("nV0SpecificCandidatesTOFpid[3]", nV0SpecificCandidatesTOFpid, &b_DTEvent_nV0SpecificCandidatesTOFpid);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid", &arrV0CandidatesTOFpid_, &b_DTEvent_arrV0CandidatesTOFpid_);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.fUniqueID", &arrV0CandidatesTOFpid_fUniqueID, &b_arrV0CandidatesTOFpid_fUniqueID);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.fBits", &arrV0CandidatesTOFpid_fBits, &b_arrV0CandidatesTOFpid_fBits);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.id", &arrV0CandidatesTOFpid_id, &b_arrV0CandidatesTOFpid_id);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.px", &arrV0CandidatesTOFpid_px, &b_arrV0CandidatesTOFpid_px);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.py", &arrV0CandidatesTOFpid_py, &b_arrV0CandidatesTOFpid_py);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.pz", &arrV0CandidatesTOFpid_pz, &b_arrV0CandidatesTOFpid_pz);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.p", &arrV0CandidatesTOFpid_p, &b_arrV0CandidatesTOFpid_p);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.pT", &arrV0CandidatesTOFpid_pT, &b_arrV0CandidatesTOFpid_pT);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.phi", &arrV0CandidatesTOFpid_phi, &b_arrV0CandidatesTOFpid_phi);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.eta", &arrV0CandidatesTOFpid_eta, &b_arrV0CandidatesTOFpid_eta);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.PdgId", &arrV0CandidatesTOFpid_PdgId, &b_arrV0CandidatesTOFpid_PdgId);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.Mass", &arrV0CandidatesTOFpid_Mass, &b_arrV0CandidatesTOFpid_Mass);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.ChiSq", &arrV0CandidatesTOFpid_ChiSq, &b_arrV0CandidatesTOFpid_ChiSq);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.Charge", &arrV0CandidatesTOFpid_Charge, &b_arrV0CandidatesTOFpid_Charge);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.TrackId", &arrV0CandidatesTOFpid_TrackId, &b_arrV0CandidatesTOFpid_TrackId);
   fChain->SetBranchAddress("arrV0CandidatesTOFpid.nDaughters", &arrV0CandidatesTOFpid_nDaughters, &b_arrV0CandidatesTOFpid_nDaughters);
   fChain->SetBranchAddress("nV0CandidatesMCpid", &nV0CandidatesMCpid, &b_DTEvent_nV0CandidatesMCpid);
   fChain->SetBranchAddress("nV0SpecificCandidatesMCpid[3]", nV0SpecificCandidatesMCpid, &b_DTEvent_nV0SpecificCandidatesMCpid);
   fChain->SetBranchAddress("arrV0CandidatesMCpid", &arrV0CandidatesMCpid_, &b_DTEvent_arrV0CandidatesMCpid_);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.fUniqueID", &arrV0CandidatesMCpid_fUniqueID, &b_arrV0CandidatesMCpid_fUniqueID);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.fBits", &arrV0CandidatesMCpid_fBits, &b_arrV0CandidatesMCpid_fBits);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.id", &arrV0CandidatesMCpid_id, &b_arrV0CandidatesMCpid_id);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.px", &arrV0CandidatesMCpid_px, &b_arrV0CandidatesMCpid_px);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.py", &arrV0CandidatesMCpid_py, &b_arrV0CandidatesMCpid_py);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.pz", &arrV0CandidatesMCpid_pz, &b_arrV0CandidatesMCpid_pz);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.p", &arrV0CandidatesMCpid_p, &b_arrV0CandidatesMCpid_p);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.pT", &arrV0CandidatesMCpid_pT, &b_arrV0CandidatesMCpid_pT);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.phi", &arrV0CandidatesMCpid_phi, &b_arrV0CandidatesMCpid_phi);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.eta", &arrV0CandidatesMCpid_eta, &b_arrV0CandidatesMCpid_eta);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.PdgId", &arrV0CandidatesMCpid_PdgId, &b_arrV0CandidatesMCpid_PdgId);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.Mass", &arrV0CandidatesMCpid_Mass, &b_arrV0CandidatesMCpid_Mass);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.ChiSq", &arrV0CandidatesMCpid_ChiSq, &b_arrV0CandidatesMCpid_ChiSq);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.Charge", &arrV0CandidatesMCpid_Charge, &b_arrV0CandidatesMCpid_Charge);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.TrackId", &arrV0CandidatesMCpid_TrackId, &b_arrV0CandidatesMCpid_TrackId);
   fChain->SetBranchAddress("arrV0CandidatesMCpid.nDaughters", &arrV0CandidatesMCpid_nDaughters, &b_arrV0CandidatesMCpid_nDaughters);
   fChain->SetBranchAddress("nMCTracks", &nMCTracks, &b_DTEvent_nMCTracks);
   fChain->SetBranchAddress("arrMCTracks", &arrMCTracks_, &b_DTEvent_arrMCTracks_);
   fChain->SetBranchAddress("arrMCTracks.fUniqueID", &arrMCTracks_fUniqueID, &b_arrMCTracks_fUniqueID);
   fChain->SetBranchAddress("arrMCTracks.fBits", &arrMCTracks_fBits, &b_arrMCTracks_fBits);
   fChain->SetBranchAddress("arrMCTracks.id", &arrMCTracks_id, &b_arrMCTracks_id);
   fChain->SetBranchAddress("arrMCTracks.ifPrimary", &arrMCTracks_ifPrimary, &b_arrMCTracks_ifPrimary);
   fChain->SetBranchAddress("arrMCTracks.px", &arrMCTracks_px, &b_arrMCTracks_px);
   fChain->SetBranchAddress("arrMCTracks.py", &arrMCTracks_py, &b_arrMCTracks_py);
   fChain->SetBranchAddress("arrMCTracks.pz", &arrMCTracks_pz, &b_arrMCTracks_pz);
   fChain->SetBranchAddress("arrMCTracks.p", &arrMCTracks_p, &b_arrMCTracks_p);
   fChain->SetBranchAddress("arrMCTracks.pT", &arrMCTracks_pT, &b_arrMCTracks_pT);
   fChain->SetBranchAddress("arrMCTracks.phi", &arrMCTracks_phi, &b_arrMCTracks_phi);
   fChain->SetBranchAddress("arrMCTracks.eta", &arrMCTracks_eta, &b_arrMCTracks_eta);
   fChain->SetBranchAddress("arrMCTracks.Rapidity", &arrMCTracks_Rapidity, &b_arrMCTracks_Rapidity);
   fChain->SetBranchAddress("arrMCTracks.Energy", &arrMCTracks_Energy, &b_arrMCTracks_Energy);
   fChain->SetBranchAddress("arrMCTracks.PdgId", &arrMCTracks_PdgId, &b_arrMCTracks_PdgId);
   fChain->SetBranchAddress("arrMCTracks.Mass", &arrMCTracks_Mass, &b_arrMCTracks_Mass);
   fChain->SetBranchAddress("arrMCTracks.Charge", &arrMCTracks_Charge, &b_arrMCTracks_Charge);
   fChain->SetBranchAddress("arrMCTracks.MotherId", &arrMCTracks_MotherId, &b_arrMCTracks_MotherId);
   fChain->SetBranchAddress("arrMCTracks.TOFPosition[3]", &arrMCTracks_TOFPosition, &b_arrMCTracks_TOFPosition);
   fChain->SetBranchAddress("arrMCTracks.TOF_pT", &arrMCTracks_TOF_pT, &b_arrMCTracks_TOF_pT);
   fChain->SetBranchAddress("arrMCTracks.TOF_phi", &arrMCTracks_TOF_phi, &b_arrMCTracks_TOF_phi);
   fChain->SetBranchAddress("arrMCTracks.TOF_eta", &arrMCTracks_TOF_eta, &b_arrMCTracks_TOF_eta);
   fChain->SetBranchAddress("arrMCTracks.PSDPosition[3]", &arrMCTracks_PSDPosition, &b_arrMCTracks_PSDPosition);
   fChain->SetBranchAddress("arrMCTracks.PSD_pT", &arrMCTracks_PSD_pT, &b_arrMCTracks_PSD_pT);
   fChain->SetBranchAddress("arrMCTracks.PSD_phi", &arrMCTracks_PSD_phi, &b_arrMCTracks_PSD_phi);
   fChain->SetBranchAddress("arrMCTracks.PSD_eta", &arrMCTracks_PSD_eta, &b_arrMCTracks_PSD_eta);
   fChain->SetBranchAddress("arrMCTracks.PSDEnergy", &arrMCTracks_PSDEnergy, &b_arrMCTracks_PSDEnergy);
   fChain->SetBranchAddress("arrMCTracks.TrackId", &arrMCTracks_TrackId, &b_arrMCTracks_TrackId);
   fChain->SetBranchAddress("arrMCTracks.PSDSectionId", &arrMCTracks_PSDSectionId, &b_arrMCTracks_PSDSectionId);
   fChain->SetBranchAddress("arrMCTracks.TOFSegmentId", &arrMCTracks_TOFSegmentId, &b_arrMCTracks_TOFSegmentId);
   fChain->SetBranchAddress("nTriggers", &nTriggers, &b_DTEvent_nTriggers);
   fChain->SetBranchAddress("arrTriggers", &arrTriggers_, &b_DTEvent_arrTriggers_);
   fChain->SetBranchAddress("arrTriggers.fUniqueID", arrTriggers_fUniqueID, &b_arrTriggers_fUniqueID);
   fChain->SetBranchAddress("arrTriggers.fBits", arrTriggers_fBits, &b_arrTriggers_fBits);
   fChain->SetBranchAddress("arrTriggers.id", arrTriggers_id, &b_arrTriggers_id);
   fChain->SetBranchAddress("arrTriggers.Signal", arrTriggers_Signal, &b_arrTriggers_Signal);
   fChain->SetBranchAddress("arrTriggers.isSignal", arrTriggers_isSignal, &b_arrTriggers_isSignal);
   fChain->SetBranchAddress("arrTriggers.Label", arrTriggers_Label, &b_arrTriggers_Label);
   fChain->SetBranchAddress("nBPDs", &nBPDs, &b_DTEvent_nBPDs);
   fChain->SetBranchAddress("arrBPDs", &arrBPDs_, &b_DTEvent_arrBPDs_);
   fChain->SetBranchAddress("arrBPDs.fUniqueID", arrBPDs_fUniqueID, &b_arrBPDs_fUniqueID);
   fChain->SetBranchAddress("arrBPDs.fBits", arrBPDs_fBits, &b_arrBPDs_fBits);
   fChain->SetBranchAddress("arrBPDs.id", arrBPDs_id, &b_arrBPDs_id);
   fChain->SetBranchAddress("arrBPDs.Position[3]", arrBPDs_Position, &b_arrBPDs_Position);
   fChain->SetBranchAddress("nWFAs", &nWFAs, &b_DTEvent_nWFAs);
   fChain->SetBranchAddress("arrWFAs", &arrWFAs_, &b_DTEvent_arrWFAs_);
   fChain->SetBranchAddress("arrWFAs.fUniqueID", arrWFAs_fUniqueID, &b_arrWFAs_fUniqueID);
   fChain->SetBranchAddress("arrWFAs.fBits", arrWFAs_fBits, &b_arrWFAs_fBits);
   fChain->SetBranchAddress("arrWFAs.TimeWFA[6][2000]", arrWFAs_TimeWFA, &b_arrWFAs_TimeWFA);
   fChain->SetBranchAddress("arrWFAs.NHits[6]", arrWFAs_NHits, &b_arrWFAs_NHits);
   fChain->SetBranchAddress("arrWFAs.id", arrWFAs_id, &b_arrWFAs_id);
   Notify();
}

Bool_t FlowVectorNA61Selector::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FlowVectorNA61Selector::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FlowVectorNA61Selector::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef FlowVectorNA61Selector_cxx
