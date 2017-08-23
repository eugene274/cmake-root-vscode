//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun May 14 13:23:12 2017 by ROOT version 6.08/06
// from TTree fDataTree/fDataTree
// found on file: 20170504_analysis_tree.root
//////////////////////////////////////////////////////////

#ifndef DTEvent_h
#define DTEvent_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TObject.h"
#include "TVector3.h"
#include "TLorentzVector.h"

#define kMaxarrClusters 14

class DTEvent {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
//   const Int_t kMaxarrClusters = 14;

   // Declaration of leaf types
 //DataTreeEvent   *DTEvent;
   UInt_t          fUniqueID;
   UInt_t          fBits;
   Bool_t          ProcessFlag;
   Int_t           RunId;
   Int_t           EventId;
   Double_t        VertexPosition[3];
   Double_t        EPAngle;
   Double_t        Centrality;
   Int_t           nClusters;
   Int_t           arrClusters_;
   UInt_t          arrClusters_fUniqueID[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fBits[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fP_fUniqueID[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fP_fBits[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fP_fX[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fP_fY[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fP_fZ[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fE[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fMomV2_fUniqueID[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fMomV2_fBits[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fMomV2_fP_fUniqueID[kMaxarrClusters];   //[arrClusters_]
   UInt_t          arrClusters_fMomV2_fP_fBits[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fMomV2_fP_fX[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fMomV2_fP_fY[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fMomV2_fP_fZ[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fMomV2_fE[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fDisp[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fDisp2[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fTof[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fCpv[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fCpv2[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fPCA[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fTrig[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fIsTagged[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fIsTagged_reg[kMaxarrClusters][10][20];   //[arrClusters_]
   Bool_t          arrClusters_fIsIsolated[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fIsPhoton[kMaxarrClusters];   //[arrClusters_]
   Bool_t          arrClusters_fUnfolded[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fModule[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fBC[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fBadDist[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fNCells[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fFiducialArea[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fPi0Decayflag[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fPi0Id[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fConverted[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fConvertedPartner[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fIsolationTag[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fTagInfo[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fPrimary[kMaxarrClusters];   //[arrClusters_]
   Int_t           arrClusters_fPrimaryAtVertex[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fX[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fY[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fZ[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fLambda0[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fLambda1[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fTime[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fPartnerPt[kMaxarrClusters];   //[arrClusters_]
   Double_t        arrClusters_fWeight[kMaxarrClusters];   //[arrClusters_]

   // List of branches
   TBranch        *b_DTEvent_fUniqueID;   //!
   TBranch        *b_DTEvent_fBits;   //!
   TBranch        *b_DTEvent_ProcessFlag;   //!
   TBranch        *b_DTEvent_RunId;   //!
   TBranch        *b_DTEvent_EventId;   //!
   TBranch        *b_DTEvent_VertexPosition;   //!
   TBranch        *b_DTEvent_EPAngle;   //!
   TBranch        *b_DTEvent_Centrality;   //!
   TBranch        *b_DTEvent_nClusters;   //!
   TBranch        *b_DTEvent_arrClusters_;   //!
   TBranch        *b_arrClusters_fUniqueID;   //!
   TBranch        *b_arrClusters_fBits;   //!
   TBranch        *b_arrClusters_fP_fUniqueID;   //!
   TBranch        *b_arrClusters_fP_fBits;   //!
   TBranch        *b_arrClusters_fP_fX;   //!
   TBranch        *b_arrClusters_fP_fY;   //!
   TBranch        *b_arrClusters_fP_fZ;   //!
   TBranch        *b_arrClusters_fE;   //!
   TBranch        *b_arrClusters_fMomV2_fUniqueID;   //!
   TBranch        *b_arrClusters_fMomV2_fBits;   //!
   TBranch        *b_arrClusters_fMomV2_fP_fUniqueID;   //!
   TBranch        *b_arrClusters_fMomV2_fP_fBits;   //!
   TBranch        *b_arrClusters_fMomV2_fP_fX;   //!
   TBranch        *b_arrClusters_fMomV2_fP_fY;   //!
   TBranch        *b_arrClusters_fMomV2_fP_fZ;   //!
   TBranch        *b_arrClusters_fMomV2_fE;   //!
   TBranch        *b_arrClusters_fDisp;   //!
   TBranch        *b_arrClusters_fDisp2;   //!
   TBranch        *b_arrClusters_fTof;   //!
   TBranch        *b_arrClusters_fCpv;   //!
   TBranch        *b_arrClusters_fCpv2;   //!
   TBranch        *b_arrClusters_fPCA;   //!
   TBranch        *b_arrClusters_fTrig;   //!
   TBranch        *b_arrClusters_fIsTagged;   //!
   TBranch        *b_arrClusters_fIsTagged_reg;   //!
   TBranch        *b_arrClusters_fIsIsolated;   //!
   TBranch        *b_arrClusters_fIsPhoton;   //!
   TBranch        *b_arrClusters_fUnfolded;   //!
   TBranch        *b_arrClusters_fModule;   //!
   TBranch        *b_arrClusters_fBC;   //!
   TBranch        *b_arrClusters_fBadDist;   //!
   TBranch        *b_arrClusters_fNCells;   //!
   TBranch        *b_arrClusters_fFiducialArea;   //!
   TBranch        *b_arrClusters_fPi0Decayflag;   //!
   TBranch        *b_arrClusters_fPi0Id;   //!
   TBranch        *b_arrClusters_fConverted;   //!
   TBranch        *b_arrClusters_fConvertedPartner;   //!
   TBranch        *b_arrClusters_fIsolationTag;   //!
   TBranch        *b_arrClusters_fTagInfo;   //!
   TBranch        *b_arrClusters_fPrimary;   //!
   TBranch        *b_arrClusters_fPrimaryAtVertex;   //!
   TBranch        *b_arrClusters_fX;   //!
   TBranch        *b_arrClusters_fY;   //!
   TBranch        *b_arrClusters_fZ;   //!
   TBranch        *b_arrClusters_fLambda0;   //!
   TBranch        *b_arrClusters_fLambda1;   //!
   TBranch        *b_arrClusters_fTime;   //!
   TBranch        *b_arrClusters_fPartnerPt;   //!
   TBranch        *b_arrClusters_fWeight;   //!

   DTEvent(TTree *tree=0);
   virtual ~DTEvent();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DTEvent_cxx
DTEvent::DTEvent(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("20170504_analysis_tree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("20170504_analysis_tree.root");
      }
      f->GetObject("fDataTree",tree);

   }
   Init(tree);
}

DTEvent::~DTEvent()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DTEvent::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DTEvent::LoadTree(Long64_t entry)
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

void DTEvent::Init(TTree *tree)
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
   fChain->SetBranchAddress("VertexPosition[3]", VertexPosition, &b_DTEvent_VertexPosition);
   fChain->SetBranchAddress("EPAngle", &EPAngle, &b_DTEvent_EPAngle);
   fChain->SetBranchAddress("Centrality", &Centrality, &b_DTEvent_Centrality);
   fChain->SetBranchAddress("nClusters", &nClusters, &b_DTEvent_nClusters);
   fChain->SetBranchAddress("arrClusters", &arrClusters_, &b_DTEvent_arrClusters_);
   fChain->SetBranchAddress("arrClusters.fUniqueID", arrClusters_fUniqueID, &b_arrClusters_fUniqueID);
   fChain->SetBranchAddress("arrClusters.fBits", arrClusters_fBits, &b_arrClusters_fBits);
   fChain->SetBranchAddress("arrClusters.fP.fUniqueID", arrClusters_fP_fUniqueID, &b_arrClusters_fP_fUniqueID);
   fChain->SetBranchAddress("arrClusters.fP.fBits", arrClusters_fP_fBits, &b_arrClusters_fP_fBits);
   fChain->SetBranchAddress("arrClusters.fP.fX", arrClusters_fP_fX, &b_arrClusters_fP_fX);
   fChain->SetBranchAddress("arrClusters.fP.fY", arrClusters_fP_fY, &b_arrClusters_fP_fY);
   fChain->SetBranchAddress("arrClusters.fP.fZ", arrClusters_fP_fZ, &b_arrClusters_fP_fZ);
   fChain->SetBranchAddress("arrClusters.fE", arrClusters_fE, &b_arrClusters_fE);
   fChain->SetBranchAddress("arrClusters.fMomV2.fUniqueID", arrClusters_fMomV2_fUniqueID, &b_arrClusters_fMomV2_fUniqueID);
   fChain->SetBranchAddress("arrClusters.fMomV2.fBits", arrClusters_fMomV2_fBits, &b_arrClusters_fMomV2_fBits);
   fChain->SetBranchAddress("arrClusters.fMomV2.fP.fUniqueID", arrClusters_fMomV2_fP_fUniqueID, &b_arrClusters_fMomV2_fP_fUniqueID);
   fChain->SetBranchAddress("arrClusters.fMomV2.fP.fBits", arrClusters_fMomV2_fP_fBits, &b_arrClusters_fMomV2_fP_fBits);
   fChain->SetBranchAddress("arrClusters.fMomV2.fP.fX", arrClusters_fMomV2_fP_fX, &b_arrClusters_fMomV2_fP_fX);
   fChain->SetBranchAddress("arrClusters.fMomV2.fP.fY", arrClusters_fMomV2_fP_fY, &b_arrClusters_fMomV2_fP_fY);
   fChain->SetBranchAddress("arrClusters.fMomV2.fP.fZ", arrClusters_fMomV2_fP_fZ, &b_arrClusters_fMomV2_fP_fZ);
   fChain->SetBranchAddress("arrClusters.fMomV2.fE", arrClusters_fMomV2_fE, &b_arrClusters_fMomV2_fE);
   fChain->SetBranchAddress("arrClusters.fDisp", arrClusters_fDisp, &b_arrClusters_fDisp);
   fChain->SetBranchAddress("arrClusters.fDisp2", arrClusters_fDisp2, &b_arrClusters_fDisp2);
   fChain->SetBranchAddress("arrClusters.fTof", arrClusters_fTof, &b_arrClusters_fTof);
   fChain->SetBranchAddress("arrClusters.fCpv", arrClusters_fCpv, &b_arrClusters_fCpv);
   fChain->SetBranchAddress("arrClusters.fCpv2", arrClusters_fCpv2, &b_arrClusters_fCpv2);
   fChain->SetBranchAddress("arrClusters.fPCA", arrClusters_fPCA, &b_arrClusters_fPCA);
   fChain->SetBranchAddress("arrClusters.fTrig", arrClusters_fTrig, &b_arrClusters_fTrig);
   fChain->SetBranchAddress("arrClusters.fIsTagged", arrClusters_fIsTagged, &b_arrClusters_fIsTagged);
   fChain->SetBranchAddress("arrClusters.fIsTagged_reg[10][20]", arrClusters_fIsTagged_reg, &b_arrClusters_fIsTagged_reg);
   fChain->SetBranchAddress("arrClusters.fIsIsolated", arrClusters_fIsIsolated, &b_arrClusters_fIsIsolated);
   fChain->SetBranchAddress("arrClusters.fIsPhoton", arrClusters_fIsPhoton, &b_arrClusters_fIsPhoton);
   fChain->SetBranchAddress("arrClusters.fUnfolded", arrClusters_fUnfolded, &b_arrClusters_fUnfolded);
   fChain->SetBranchAddress("arrClusters.fModule", arrClusters_fModule, &b_arrClusters_fModule);
   fChain->SetBranchAddress("arrClusters.fBC", arrClusters_fBC, &b_arrClusters_fBC);
   fChain->SetBranchAddress("arrClusters.fBadDist", arrClusters_fBadDist, &b_arrClusters_fBadDist);
   fChain->SetBranchAddress("arrClusters.fNCells", arrClusters_fNCells, &b_arrClusters_fNCells);
   fChain->SetBranchAddress("arrClusters.fFiducialArea", arrClusters_fFiducialArea, &b_arrClusters_fFiducialArea);
   fChain->SetBranchAddress("arrClusters.fPi0Decayflag", arrClusters_fPi0Decayflag, &b_arrClusters_fPi0Decayflag);
   fChain->SetBranchAddress("arrClusters.fPi0Id", arrClusters_fPi0Id, &b_arrClusters_fPi0Id);
   fChain->SetBranchAddress("arrClusters.fConverted", arrClusters_fConverted, &b_arrClusters_fConverted);
   fChain->SetBranchAddress("arrClusters.fConvertedPartner", arrClusters_fConvertedPartner, &b_arrClusters_fConvertedPartner);
   fChain->SetBranchAddress("arrClusters.fIsolationTag", arrClusters_fIsolationTag, &b_arrClusters_fIsolationTag);
   fChain->SetBranchAddress("arrClusters.fTagInfo", arrClusters_fTagInfo, &b_arrClusters_fTagInfo);
   fChain->SetBranchAddress("arrClusters.fPrimary", arrClusters_fPrimary, &b_arrClusters_fPrimary);
   fChain->SetBranchAddress("arrClusters.fPrimaryAtVertex", arrClusters_fPrimaryAtVertex, &b_arrClusters_fPrimaryAtVertex);
   fChain->SetBranchAddress("arrClusters.fX", arrClusters_fX, &b_arrClusters_fX);
   fChain->SetBranchAddress("arrClusters.fY", arrClusters_fY, &b_arrClusters_fY);
   fChain->SetBranchAddress("arrClusters.fZ", arrClusters_fZ, &b_arrClusters_fZ);
   fChain->SetBranchAddress("arrClusters.fLambda0", arrClusters_fLambda0, &b_arrClusters_fLambda0);
   fChain->SetBranchAddress("arrClusters.fLambda1", arrClusters_fLambda1, &b_arrClusters_fLambda1);
   fChain->SetBranchAddress("arrClusters.fTime", arrClusters_fTime, &b_arrClusters_fTime);
   fChain->SetBranchAddress("arrClusters.fPartnerPt", arrClusters_fPartnerPt, &b_arrClusters_fPartnerPt);
   fChain->SetBranchAddress("arrClusters.fWeight", arrClusters_fWeight, &b_arrClusters_fWeight);
   Notify();
}

Bool_t DTEvent::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DTEvent::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DTEvent::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DTEvent_cxx
