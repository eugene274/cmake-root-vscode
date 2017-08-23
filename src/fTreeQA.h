//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Aug 13 18:57:59 2017 by ROOT version 6.08/06
// from TTree fTreeQA/Output tree for QA
// found on file: run-026265x052.TreeNA61.root
//////////////////////////////////////////////////////////

#ifndef fTreeQA_h
#define fTreeQA_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class fTreeQA {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           Event_Id;
   Int_t           Run_Id;
   Int_t           Event_Timestamp;
   Float_t         Main_Vertex_X;
   Float_t         Main_Vertex_Y;
   Float_t         Main_Vertex_Z;
   Float_t         Primary_Vertex_X;
   Float_t         Primary_Vertex_Y;
   Float_t         Primary_Vertex_Z;
   Bool_t          Has_Primary_Vertex;
   Int_t           Primary_Vertex_Q;
   Float_t         TPC_main_vtx_track_pT[2000];
   Float_t         TPC_main_vtx_track_px[2000];
   Float_t         TPC_main_vtx_track_py[2000];
   Float_t         TPC_main_vtx_track_pz[2000];
   Float_t         TPC_main_vtx_track_eta[2000];
   Float_t         TPC_main_vtx_track_phi[2000];
   Float_t         TPC_main_vtx_track_point_x[2000];
   Float_t         TPC_main_vtx_track_point_y[2000];
   Float_t         TPC_main_vtx_track_point_z[2000];
   Float_t         TPC_main_vtx_track_first_point_x[2000];
   Float_t         TPC_main_vtx_track_first_point_y[2000];
   Float_t         TPC_main_vtx_track_first_point_z[2000];
   Float_t         TPC_main_vtx_track_last_point_x[2000];
   Float_t         TPC_main_vtx_track_last_point_y[2000];
   Float_t         TPC_main_vtx_track_last_point_z[2000];
   Float_t         TPC_main_vtx_pT[2000];
   Float_t         TPC_main_vtx_px[2000];
   Float_t         TPC_main_vtx_py[2000];
   Float_t         TPC_main_vtx_pz[2000];
   Float_t         TPC_main_vtx_eta[2000];
   Float_t         TPC_main_vtx_phi[2000];
   Float_t         TPC_main_vtx_ext_track_px[2000];
   Float_t         TPC_main_vtx_ext_track_py[2000];
   Float_t         TPC_main_vtx_ext_track_pz[2000];
   Float_t         TPC_main_vtx_ext_first_track_px[2000];
   Float_t         TPC_main_vtx_ext_first_track_py[2000];
   Float_t         TPC_main_vtx_ext_first_track_pz[2000];
   Float_t         TPC_main_vtx_ext_last_track_px[2000];
   Float_t         TPC_main_vtx_ext_last_track_py[2000];
   Float_t         TPC_main_vtx_ext_last_track_pz[2000];
   Float_t         TPC_main_vtx_ext_point_x[2000];
   Float_t         TPC_main_vtx_ext_point_y[2000];
   Float_t         TPC_main_vtx_ext_point_z[2000];
   Float_t         TPC_main_vtx_ext_first_point_x[2000];
   Float_t         TPC_main_vtx_ext_first_point_y[2000];
   Float_t         TPC_main_vtx_ext_first_point_z[2000];
   Float_t         TPC_main_vtx_ext_last_point_x[2000];
   Float_t         TPC_main_vtx_ext_last_point_y[2000];
   Float_t         TPC_main_vtx_ext_last_point_z[2000];
   Float_t         TPC_main_test_ext_track_px[2000];
   Float_t         TPC_main_test_ext_track_py[2000];
   Float_t         TPC_main_test_ext_track_pz[2000];
   Float_t         TPC_main_test_ext_first_track_px[2000];
   Float_t         TPC_main_test_ext_first_track_py[2000];
   Float_t         TPC_main_test_ext_first_track_pz[2000];
   Float_t         TPC_main_test_ext_last_track_px[2000];
   Float_t         TPC_main_test_ext_last_track_py[2000];
   Float_t         TPC_main_test_ext_last_track_pz[2000];
   Float_t         TPC_main_test_ext_point_x[2000];
   Float_t         TPC_main_test_ext_point_y[2000];
   Float_t         TPC_main_test_ext_point_z[2000];
   Float_t         TPC_main_test_ext_first_point_x[2000];
   Float_t         TPC_main_test_ext_first_point_y[2000];
   Float_t         TPC_main_test_ext_first_point_z[2000];
   Float_t         TPC_main_test_ext_last_point_x[2000];
   Float_t         TPC_main_test_ext_last_point_y[2000];
   Float_t         TPC_main_test_ext_last_point_z[2000];
   Float_t         TPC_main_PSD_ext_track_px[2000];
   Float_t         TPC_main_PSD_ext_track_py[2000];
   Float_t         TPC_main_PSD_ext_track_pz[2000];
   Float_t         TPC_main_PSD_ext_point_x[2000];
   Float_t         TPC_main_PSD_ext_point_y[2000];
   Float_t         TPC_main_PSD_ext_point_z[2000];
   Float_t         TPC_main_vtx_impact_point_X[2000];
   Float_t         TPC_main_vtx_impact_point_Y[2000];
   Float_t         TPC_main_vtx_impact_point_Z[2000];
   Float_t         TPC_primary_vtx_track_pT[2000];
   Float_t         TPC_primary_vtx_track_eta[2000];
   Float_t         TPC_primary_vtx_track_phi[2000];
   Float_t         TPC_primary_vtx_pT[2000];
   Float_t         TPC_primary_vtx_eta[2000];
   Float_t         TPC_primary_vtx_phi[2000];
   Float_t         TPC_primary_vtx_impact_point_X[2000];
   Float_t         TPC_primary_vtx_impact_point_Y[2000];
   Float_t         TPC_primary_vtx_impact_point_Z[2000];
   Int_t           TPC_main_vtx_track_charge[2000];
   Int_t           TPC_main_vtx_track_nClusters_Total[2000];
   Int_t           TPC_main_vtx_track_nClusters_TPCV1[2000];
   Int_t           TPC_main_vtx_track_nClusters_TPCV2[2000];
   Int_t           TPC_main_vtx_track_nClusters_TPCVmain[2000];
   Int_t           TPC_main_vtx_track_nClusters_TPCVgap[2000];
   Int_t           TPC_main_vtx_track_nClustersPotential_Total[2000];
   Int_t           TPC_main_vtx_track_nClustersdEdX_Total[2000];
   Int_t           TPC_main_vtx_track_nClustersdEdX_TPCV1[2000];
   Int_t           TPC_main_vtx_track_nClustersdEdX_TPCV2[2000];
   Int_t           TPC_main_vtx_track_nClustersdEdX_TPCVmain[2000];
   Int_t           TPC_main_vtx_track_nClustersdEdX_TPCVgap[2000];
   Double_t        TPC_main_vtx_track_EnergyClusters_Total[2000];
   Double_t        TPC_main_vtx_track_EnergyClusters_TPCV1[2000];
   Double_t        TPC_main_vtx_track_EnergyClusters_TPCV2[2000];
   Double_t        TPC_main_vtx_track_EnergyClusters_TPCVmain[2000];
   Double_t        TPC_main_vtx_track_EnergyClusters_TPCVgap[2000];
   Float_t         TPC_main_vtx_track_chi2[2000];
   Int_t           TPC_main_vtx_track_ndf[2000];
   Int_t           TPC_primary_vtx_track_charge[2000];
   Int_t           TPC_primary_vtx_track_nClusters_Total[2000];
   Int_t           TPC_primary_vtx_track_nClusters_TPCV1[2000];
   Int_t           TPC_primary_vtx_track_nClusters_TPCV2[2000];
   Int_t           TPC_primary_vtx_track_nClusters_TPCVmain[2000];
   Int_t           TPC_primary_vtx_track_nClusters_TPCVgap[2000];
   Int_t           TPC_primary_vtx_track_nClustersPotential_Total[2000];
   Int_t           TPC_primary_vtx_track_nClustersdEdX_Total[2000];
   Int_t           TPC_primary_vtx_track_nClustersdEdX_TPCV1[2000];
   Int_t           TPC_primary_vtx_track_nClustersdEdX_TPCV2[2000];
   Int_t           TPC_primary_vtx_track_nClustersdEdX_TPCVmain[2000];
   Int_t           TPC_primary_vtx_track_nClustersdEdX_TPCVgap[2000];
   Double_t        TPC_primary_vtx_track_EnergyClusters_Total[2000];
   Double_t        TPC_primary_vtx_track_EnergyClusters_TPCV1[2000];
   Double_t        TPC_primary_vtx_track_EnergyClusters_TPCV2[2000];
   Double_t        TPC_primary_vtx_track_EnergyClusters_TPCVmain[2000];
   Double_t        TPC_primary_vtx_track_EnergyClusters_TPCVgap[2000];
   Float_t         TPC_primary_vtx_track_chi2[2000];
   Int_t           TPC_primary_vtx_track_ndf[2000];
   Int_t           TPC_main_vtx_nTracks;
   Int_t           TPC_primary_vtx_nTracks;
   Int_t           PSD_module_Number;
   Int_t           PSD_section_Number;
   Float_t         PSD_module_X[45];
   Float_t         PSD_module_Y[45];
   Float_t         PSD_module_Z[45];
   Float_t         PSD_module_Energy[45];
   Float_t         PSD_module_Energy_default[45];
   Int_t           PSD_module_number_of_sections[45];
   Float_t         PSD_section_Energy[45][10];
   Int_t           PSD_section_Number_array[45][10];
   Float_t         PSD_Energy;
   Float_t         PSD_1_Energy;
   Float_t         PSD_2_Energy;
   Float_t         PSD_3_Energy;
   Int_t           BPD_Status[2][3][3];
   Float_t         BPD_Position[2][3][3];
   Float_t         BPD_PositionError[2][3][3];
   Float_t         triggersADC[2][6];
   Bool_t          isTriggers_Simple[2][6];
   Bool_t          isTriggers_Combined[2][4];
   Float_t         WFA_TimeStructure[6][2000];
   Int_t           WFA_NumberOfSignalHits[6];
   Float_t         FitVertexX;
   Float_t         FitVertexY;
   Float_t         FitVertexZ;
   Int_t           FitVertexQ;

   // List of branches
   TBranch        *b_Event_Id;   //!
   TBranch        *b_Run_Id;   //!
   TBranch        *b_Event_Timestamp;   //!
   TBranch        *b_Main_Vertex_X;   //!
   TBranch        *b_Main_Vertex_Y;   //!
   TBranch        *b_Main_Vertex_Z;   //!
   TBranch        *b_Primary_Vertex_X;   //!
   TBranch        *b_Primary_Vertex_Y;   //!
   TBranch        *b_Primary_Vertex_Z;   //!
   TBranch        *b_Has_Primary_Vertex;   //!
   TBranch        *b_Primary_Vertex_Q;   //!
   TBranch        *b_TPC_main_vtx_track_pT;   //!
   TBranch        *b_TPC_main_vtx_track_px;   //!
   TBranch        *b_TPC_main_vtx_track_py;   //!
   TBranch        *b_TPC_main_vtx_track_pz;   //!
   TBranch        *b_TPC_main_vtx_track_eta;   //!
   TBranch        *b_TPC_main_vtx_track_phi;   //!
   TBranch        *b_TPC_main_vtx_track_point_x;   //!
   TBranch        *b_TPC_main_vtx_track_point_y;   //!
   TBranch        *b_TPC_main_vtx_track_point_z;   //!
   TBranch        *b_TPC_main_vtx_track_first_point_x;   //!
   TBranch        *b_TPC_main_vtx_track_first_point_y;   //!
   TBranch        *b_TPC_main_vtx_track_first_point_z;   //!
   TBranch        *b_TPC_main_vtx_track_last_point_x;   //!
   TBranch        *b_TPC_main_vtx_track_last_point_y;   //!
   TBranch        *b_TPC_main_vtx_track_last_point_z;   //!
   TBranch        *b_TPC_main_vtx_pT;   //!
   TBranch        *b_TPC_main_vtx_px;   //!
   TBranch        *b_TPC_main_vtx_py;   //!
   TBranch        *b_TPC_main_vtx_pz;   //!
   TBranch        *b_TPC_main_vtx_eta;   //!
   TBranch        *b_TPC_main_vtx_phi;   //!
   TBranch        *b_TPC_main_vtx_ext_track_px;   //!
   TBranch        *b_TPC_main_vtx_ext_track_py;   //!
   TBranch        *b_TPC_main_vtx_ext_track_pz;   //!
   TBranch        *b_TPC_main_vtx_ext_first_track_px;   //!
   TBranch        *b_TPC_main_vtx_ext_first_track_py;   //!
   TBranch        *b_TPC_main_vtx_ext_first_track_pz;   //!
   TBranch        *b_TPC_main_vtx_ext_last_track_px;   //!
   TBranch        *b_TPC_main_vtx_ext_last_track_py;   //!
   TBranch        *b_TPC_main_vtx_ext_last_track_pz;   //!
   TBranch        *b_TPC_main_vtx_ext_point_x;   //!
   TBranch        *b_TPC_main_vtx_ext_point_y;   //!
   TBranch        *b_TPC_main_vtx_ext_point_z;   //!
   TBranch        *b_TPC_main_vtx_ext_first_point_x;   //!
   TBranch        *b_TPC_main_vtx_ext_first_point_y;   //!
   TBranch        *b_TPC_main_vtx_ext_first_point_z;   //!
   TBranch        *b_TPC_main_vtx_ext_last_point_x;   //!
   TBranch        *b_TPC_main_vtx_ext_last_point_y;   //!
   TBranch        *b_TPC_main_vtx_ext_last_point_z;   //!
   TBranch        *b_TPC_main_test_ext_track_px;   //!
   TBranch        *b_TPC_main_test_ext_track_py;   //!
   TBranch        *b_TPC_main_test_ext_track_pz;   //!
   TBranch        *b_TPC_main_test_ext_first_track_px;   //!
   TBranch        *b_TPC_main_test_ext_first_track_py;   //!
   TBranch        *b_TPC_main_test_ext_first_track_pz;   //!
   TBranch        *b_TPC_main_test_ext_last_track_px;   //!
   TBranch        *b_TPC_main_test_ext_last_track_py;   //!
   TBranch        *b_TPC_main_test_ext_last_track_pz;   //!
   TBranch        *b_TPC_main_test_ext_point_x;   //!
   TBranch        *b_TPC_main_test_ext_point_y;   //!
   TBranch        *b_TPC_main_test_ext_point_z;   //!
   TBranch        *b_TPC_main_test_ext_first_point_x;   //!
   TBranch        *b_TPC_main_test_ext_first_point_y;   //!
   TBranch        *b_TPC_main_test_ext_first_point_z;   //!
   TBranch        *b_TPC_main_test_ext_last_point_x;   //!
   TBranch        *b_TPC_main_test_ext_last_point_y;   //!
   TBranch        *b_TPC_main_test_ext_last_point_z;   //!
   TBranch        *b_TPC_main_PSD_ext_track_px;   //!
   TBranch        *b_TPC_main_PSD_ext_track_py;   //!
   TBranch        *b_TPC_main_PSD_ext_track_pz;   //!
   TBranch        *b_TPC_main_PSD_ext_point_x;   //!
   TBranch        *b_TPC_main_PSD_ext_point_y;   //!
   TBranch        *b_TPC_main_PSD_ext_point_z;   //!
   TBranch        *b_TPC_main_vtx_impact_point_X;   //!
   TBranch        *b_TPC_main_vtx_impact_point_Y;   //!
   TBranch        *b_TPC_main_vtx_impact_point_Z;   //!
   TBranch        *b_TPC_primary_vtx_track_pT;   //!
   TBranch        *b_TPC_primary_vtx_track_eta;   //!
   TBranch        *b_TPC_primary_vtx_track_phi;   //!
   TBranch        *b_TPC_primary_vtx_pT;   //!
   TBranch        *b_TPC_primary_vtx_eta;   //!
   TBranch        *b_TPC_primary_vtx_phi;   //!
   TBranch        *b_TPC_primary_vtx_impact_point_X;   //!
   TBranch        *b_TPC_primary_vtx_impact_point_Y;   //!
   TBranch        *b_TPC_primary_vtx_impact_point_Z;   //!
   TBranch        *b_TPC_main_vtx_track_charge;   //!
   TBranch        *b_TPC_main_vtx_track_nClusters_Total;   //!
   TBranch        *b_TPC_main_vtx_track_nClusters_TPCV1;   //!
   TBranch        *b_TPC_main_vtx_track_nClusters_TPCV2;   //!
   TBranch        *b_TPC_main_vtx_track_nClusters_TPCVmain;   //!
   TBranch        *b_TPC_main_vtx_track_nClusters_TPCVgap;   //!
   TBranch        *b_TPC_main_vtx_track_nClustersPotential_Total;   //!
   TBranch        *b_TPC_main_vtx_track_nClustersdEdX_Total;   //!
   TBranch        *b_TPC_main_vtx_track_nClustersdEdX_TPCV1;   //!
   TBranch        *b_TPC_main_vtx_track_nClustersdEdX_TPCV2;   //!
   TBranch        *b_TPC_main_vtx_track_nClustersdEdX_TPCVmain;   //!
   TBranch        *b_TPC_main_vtx_track_nClustersdEdX_TPCVgap;   //!
   TBranch        *b_TPC_main_vtx_track_EnergyClusters_Total;   //!
   TBranch        *b_TPC_main_vtx_track_EnergyClusters_TPCV1;   //!
   TBranch        *b_TPC_main_vtx_track_EnergyClusters_TPCV2;   //!
   TBranch        *b_TPC_main_vtx_track_EnergyClusters_TPCVmain;   //!
   TBranch        *b_TPC_main_vtx_track_EnergyClusters_TPCVgap;   //!
   TBranch        *b_TPC_main_vtx_track_chi2;   //!
   TBranch        *b_TPC_main_vtx_track_ndf;   //!
   TBranch        *b_TPC_primary_vtx_track_charge;   //!
   TBranch        *b_TPC_primary_vtx_track_nClusters_Total;   //!
   TBranch        *b_TPC_primary_vtx_track_nClusters_TPCV1;   //!
   TBranch        *b_TPC_primary_vtx_track_nClusters_TPCV2;   //!
   TBranch        *b_TPC_primary_vtx_track_nClusters_TPCVmain;   //!
   TBranch        *b_TPC_primary_vtx_track_nClusters_TPCVgap;   //!
   TBranch        *b_TPC_primary_vtx_track_nClustersPotential_Total;   //!
   TBranch        *b_TPC_primary_vtx_track_nClustersdEdX_Total;   //!
   TBranch        *b_TPC_primary_vtx_track_nClustersdEdX_TPCV1;   //!
   TBranch        *b_TPC_primary_vtx_track_nClustersdEdX_TPCV2;   //!
   TBranch        *b_TPC_primary_vtx_track_nClustersdEdX_TPCVmain;   //!
   TBranch        *b_TPC_primary_vtx_track_nClustersdEdX_TPCVgap;   //!
   TBranch        *b_TPC_primary_vtx_track_EnergyClusters_Total;   //!
   TBranch        *b_TPC_primary_vtx_track_EnergyClusters_TPCV1;   //!
   TBranch        *b_TPC_primary_vtx_track_EnergyClusters_TPCV2;   //!
   TBranch        *b_TPC_primary_vtx_track_EnergyClusters_TPCVmain;   //!
   TBranch        *b_TPC_primary_vtx_track_EnergyClusters_TPCVgap;   //!
   TBranch        *b_TPC_primary_vtx_track_chi2;   //!
   TBranch        *b_TPC_primary_vtx_track_ndf;   //!
   TBranch        *b_TPC_main_vtx_nTracks;   //!
   TBranch        *b_TPC_primary_vtx_nTracks;   //!
   TBranch        *b_PSD_module_Number;   //!
   TBranch        *b_PSD_section_Number;   //!
   TBranch        *b_PSD_module_X;   //!
   TBranch        *b_PSD_module_Y;   //!
   TBranch        *b_PSD_module_Z;   //!
   TBranch        *b_PSD_module_Energy;   //!
   TBranch        *b_PSD_module_Energy_default;   //!
   TBranch        *b_PSD_module_number_of_sections;   //!
   TBranch        *b_PSD_section_Energy;   //!
   TBranch        *b_PSD_section_Number_array;   //!
   TBranch        *b_PSD_Energy;   //!
   TBranch        *b_PSD_1_Energy;   //!
   TBranch        *b_PSD_2_Energy;   //!
   TBranch        *b_PSD_3_Energy;   //!
   TBranch        *b_BPD_Status;   //!
   TBranch        *b_BPD_Position;   //!
   TBranch        *b_BPD_PositionError;   //!
   TBranch        *b_triggersADC;   //!
   TBranch        *b_isTriggers_Simple;   //!
   TBranch        *b_isTriggers_Combined;   //!
   TBranch        *b_WFA_TimeStructure;   //!
   TBranch        *b_WFA_NumberOfSignalHits;   //!
   TBranch        *b_FitVertexX;   //!
   TBranch        *b_FitVertexY;   //!
   TBranch        *b_FitVertexZ;   //!
   TBranch        *b_FitVertexQ;   //!

   fTreeQA(TTree *tree=0);
   virtual ~fTreeQA();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef fTreeQA_cxx
fTreeQA::fTreeQA(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("run-026265x052.TreeNA61.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("run-026265x052.TreeNA61.root");
      }
      f->GetObject("fTreeQA",tree);

   }
   Init(tree);
}

fTreeQA::~fTreeQA()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t fTreeQA::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t fTreeQA::LoadTree(Long64_t entry)
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

void fTreeQA::Init(TTree *tree)
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

   fChain->SetBranchAddress("Event_Id", &Event_Id, &b_Event_Id);
   fChain->SetBranchAddress("Run_Id", &Run_Id, &b_Run_Id);
   fChain->SetBranchAddress("Event_Timestamp", &Event_Timestamp, &b_Event_Timestamp);
   fChain->SetBranchAddress("Main_Vertex_X", &Main_Vertex_X, &b_Main_Vertex_X);
   fChain->SetBranchAddress("Main_Vertex_Y", &Main_Vertex_Y, &b_Main_Vertex_Y);
   fChain->SetBranchAddress("Main_Vertex_Z", &Main_Vertex_Z, &b_Main_Vertex_Z);
   fChain->SetBranchAddress("Primary_Vertex_X", &Primary_Vertex_X, &b_Primary_Vertex_X);
   fChain->SetBranchAddress("Primary_Vertex_Y", &Primary_Vertex_Y, &b_Primary_Vertex_Y);
   fChain->SetBranchAddress("Primary_Vertex_Z", &Primary_Vertex_Z, &b_Primary_Vertex_Z);
   fChain->SetBranchAddress("Has_Primary_Vertex", &Has_Primary_Vertex, &b_Has_Primary_Vertex);
   fChain->SetBranchAddress("Primary_Vertex_Q", &Primary_Vertex_Q, &b_Primary_Vertex_Q);
   fChain->SetBranchAddress("TPC_main_vtx_track_pT", TPC_main_vtx_track_pT, &b_TPC_main_vtx_track_pT);
   fChain->SetBranchAddress("TPC_main_vtx_track_px", TPC_main_vtx_track_px, &b_TPC_main_vtx_track_px);
   fChain->SetBranchAddress("TPC_main_vtx_track_py", TPC_main_vtx_track_py, &b_TPC_main_vtx_track_py);
   fChain->SetBranchAddress("TPC_main_vtx_track_pz", TPC_main_vtx_track_pz, &b_TPC_main_vtx_track_pz);
   fChain->SetBranchAddress("TPC_main_vtx_track_eta", TPC_main_vtx_track_eta, &b_TPC_main_vtx_track_eta);
   fChain->SetBranchAddress("TPC_main_vtx_track_phi", TPC_main_vtx_track_phi, &b_TPC_main_vtx_track_phi);
   fChain->SetBranchAddress("TPC_main_vtx_track_point_x", TPC_main_vtx_track_point_x, &b_TPC_main_vtx_track_point_x);
   fChain->SetBranchAddress("TPC_main_vtx_track_point_y", TPC_main_vtx_track_point_y, &b_TPC_main_vtx_track_point_y);
   fChain->SetBranchAddress("TPC_main_vtx_track_point_z", TPC_main_vtx_track_point_z, &b_TPC_main_vtx_track_point_z);
   fChain->SetBranchAddress("TPC_main_vtx_track_first_point_x", TPC_main_vtx_track_first_point_x, &b_TPC_main_vtx_track_first_point_x);
   fChain->SetBranchAddress("TPC_main_vtx_track_first_point_y", TPC_main_vtx_track_first_point_y, &b_TPC_main_vtx_track_first_point_y);
   fChain->SetBranchAddress("TPC_main_vtx_track_first_point_z", TPC_main_vtx_track_first_point_z, &b_TPC_main_vtx_track_first_point_z);
   fChain->SetBranchAddress("TPC_main_vtx_track_last_point_x", TPC_main_vtx_track_last_point_x, &b_TPC_main_vtx_track_last_point_x);
   fChain->SetBranchAddress("TPC_main_vtx_track_last_point_y", TPC_main_vtx_track_last_point_y, &b_TPC_main_vtx_track_last_point_y);
   fChain->SetBranchAddress("TPC_main_vtx_track_last_point_z", TPC_main_vtx_track_last_point_z, &b_TPC_main_vtx_track_last_point_z);
   fChain->SetBranchAddress("TPC_main_vtx_pT", TPC_main_vtx_pT, &b_TPC_main_vtx_pT);
   fChain->SetBranchAddress("TPC_main_vtx_px", TPC_main_vtx_px, &b_TPC_main_vtx_px);
   fChain->SetBranchAddress("TPC_main_vtx_py", TPC_main_vtx_py, &b_TPC_main_vtx_py);
   fChain->SetBranchAddress("TPC_main_vtx_pz", TPC_main_vtx_pz, &b_TPC_main_vtx_pz);
   fChain->SetBranchAddress("TPC_main_vtx_eta", TPC_main_vtx_eta, &b_TPC_main_vtx_eta);
   fChain->SetBranchAddress("TPC_main_vtx_phi", TPC_main_vtx_phi, &b_TPC_main_vtx_phi);
   fChain->SetBranchAddress("TPC_main_vtx_ext_track_px", TPC_main_vtx_ext_track_px, &b_TPC_main_vtx_ext_track_px);
   fChain->SetBranchAddress("TPC_main_vtx_ext_track_py", TPC_main_vtx_ext_track_py, &b_TPC_main_vtx_ext_track_py);
   fChain->SetBranchAddress("TPC_main_vtx_ext_track_pz", TPC_main_vtx_ext_track_pz, &b_TPC_main_vtx_ext_track_pz);
   fChain->SetBranchAddress("TPC_main_vtx_ext_first_track_px", TPC_main_vtx_ext_first_track_px, &b_TPC_main_vtx_ext_first_track_px);
   fChain->SetBranchAddress("TPC_main_vtx_ext_first_track_py", TPC_main_vtx_ext_first_track_py, &b_TPC_main_vtx_ext_first_track_py);
   fChain->SetBranchAddress("TPC_main_vtx_ext_first_track_pz", TPC_main_vtx_ext_first_track_pz, &b_TPC_main_vtx_ext_first_track_pz);
   fChain->SetBranchAddress("TPC_main_vtx_ext_last_track_px", TPC_main_vtx_ext_last_track_px, &b_TPC_main_vtx_ext_last_track_px);
   fChain->SetBranchAddress("TPC_main_vtx_ext_last_track_py", TPC_main_vtx_ext_last_track_py, &b_TPC_main_vtx_ext_last_track_py);
   fChain->SetBranchAddress("TPC_main_vtx_ext_last_track_pz", TPC_main_vtx_ext_last_track_pz, &b_TPC_main_vtx_ext_last_track_pz);
   fChain->SetBranchAddress("TPC_main_vtx_ext_point_x", TPC_main_vtx_ext_point_x, &b_TPC_main_vtx_ext_point_x);
   fChain->SetBranchAddress("TPC_main_vtx_ext_point_y", TPC_main_vtx_ext_point_y, &b_TPC_main_vtx_ext_point_y);
   fChain->SetBranchAddress("TPC_main_vtx_ext_point_z", TPC_main_vtx_ext_point_z, &b_TPC_main_vtx_ext_point_z);
   fChain->SetBranchAddress("TPC_main_vtx_ext_first_point_x", TPC_main_vtx_ext_first_point_x, &b_TPC_main_vtx_ext_first_point_x);
   fChain->SetBranchAddress("TPC_main_vtx_ext_first_point_y", TPC_main_vtx_ext_first_point_y, &b_TPC_main_vtx_ext_first_point_y);
   fChain->SetBranchAddress("TPC_main_vtx_ext_first_point_z", TPC_main_vtx_ext_first_point_z, &b_TPC_main_vtx_ext_first_point_z);
   fChain->SetBranchAddress("TPC_main_vtx_ext_last_point_x", TPC_main_vtx_ext_last_point_x, &b_TPC_main_vtx_ext_last_point_x);
   fChain->SetBranchAddress("TPC_main_vtx_ext_last_point_y", TPC_main_vtx_ext_last_point_y, &b_TPC_main_vtx_ext_last_point_y);
   fChain->SetBranchAddress("TPC_main_vtx_ext_last_point_z", TPC_main_vtx_ext_last_point_z, &b_TPC_main_vtx_ext_last_point_z);
   fChain->SetBranchAddress("TPC_main_test_ext_track_px", TPC_main_test_ext_track_px, &b_TPC_main_test_ext_track_px);
   fChain->SetBranchAddress("TPC_main_test_ext_track_py", TPC_main_test_ext_track_py, &b_TPC_main_test_ext_track_py);
   fChain->SetBranchAddress("TPC_main_test_ext_track_pz", TPC_main_test_ext_track_pz, &b_TPC_main_test_ext_track_pz);
   fChain->SetBranchAddress("TPC_main_test_ext_first_track_px", TPC_main_test_ext_first_track_px, &b_TPC_main_test_ext_first_track_px);
   fChain->SetBranchAddress("TPC_main_test_ext_first_track_py", TPC_main_test_ext_first_track_py, &b_TPC_main_test_ext_first_track_py);
   fChain->SetBranchAddress("TPC_main_test_ext_first_track_pz", TPC_main_test_ext_first_track_pz, &b_TPC_main_test_ext_first_track_pz);
   fChain->SetBranchAddress("TPC_main_test_ext_last_track_px", TPC_main_test_ext_last_track_px, &b_TPC_main_test_ext_last_track_px);
   fChain->SetBranchAddress("TPC_main_test_ext_last_track_py", TPC_main_test_ext_last_track_py, &b_TPC_main_test_ext_last_track_py);
   fChain->SetBranchAddress("TPC_main_test_ext_last_track_pz", TPC_main_test_ext_last_track_pz, &b_TPC_main_test_ext_last_track_pz);
   fChain->SetBranchAddress("TPC_main_test_ext_point_x", TPC_main_test_ext_point_x, &b_TPC_main_test_ext_point_x);
   fChain->SetBranchAddress("TPC_main_test_ext_point_y", TPC_main_test_ext_point_y, &b_TPC_main_test_ext_point_y);
   fChain->SetBranchAddress("TPC_main_test_ext_point_z", TPC_main_test_ext_point_z, &b_TPC_main_test_ext_point_z);
   fChain->SetBranchAddress("TPC_main_test_ext_first_point_x", TPC_main_test_ext_first_point_x, &b_TPC_main_test_ext_first_point_x);
   fChain->SetBranchAddress("TPC_main_test_ext_first_point_y", TPC_main_test_ext_first_point_y, &b_TPC_main_test_ext_first_point_y);
   fChain->SetBranchAddress("TPC_main_test_ext_first_point_z", TPC_main_test_ext_first_point_z, &b_TPC_main_test_ext_first_point_z);
   fChain->SetBranchAddress("TPC_main_test_ext_last_point_x", TPC_main_test_ext_last_point_x, &b_TPC_main_test_ext_last_point_x);
   fChain->SetBranchAddress("TPC_main_test_ext_last_point_y", TPC_main_test_ext_last_point_y, &b_TPC_main_test_ext_last_point_y);
   fChain->SetBranchAddress("TPC_main_test_ext_last_point_z", TPC_main_test_ext_last_point_z, &b_TPC_main_test_ext_last_point_z);
   fChain->SetBranchAddress("TPC_main_PSD_ext_track_px", TPC_main_PSD_ext_track_px, &b_TPC_main_PSD_ext_track_px);
   fChain->SetBranchAddress("TPC_main_PSD_ext_track_py", TPC_main_PSD_ext_track_py, &b_TPC_main_PSD_ext_track_py);
   fChain->SetBranchAddress("TPC_main_PSD_ext_track_pz", TPC_main_PSD_ext_track_pz, &b_TPC_main_PSD_ext_track_pz);
   fChain->SetBranchAddress("TPC_main_PSD_ext_point_x", TPC_main_PSD_ext_point_x, &b_TPC_main_PSD_ext_point_x);
   fChain->SetBranchAddress("TPC_main_PSD_ext_point_y", TPC_main_PSD_ext_point_y, &b_TPC_main_PSD_ext_point_y);
   fChain->SetBranchAddress("TPC_main_PSD_ext_point_z", TPC_main_PSD_ext_point_z, &b_TPC_main_PSD_ext_point_z);
   fChain->SetBranchAddress("TPC_main_vtx_impact_point_X", TPC_main_vtx_impact_point_X, &b_TPC_main_vtx_impact_point_X);
   fChain->SetBranchAddress("TPC_main_vtx_impact_point_Y", TPC_main_vtx_impact_point_Y, &b_TPC_main_vtx_impact_point_Y);
   fChain->SetBranchAddress("TPC_main_vtx_impact_point_Z", TPC_main_vtx_impact_point_Z, &b_TPC_main_vtx_impact_point_Z);
   fChain->SetBranchAddress("TPC_primary_vtx_track_pT", TPC_primary_vtx_track_pT, &b_TPC_primary_vtx_track_pT);
   fChain->SetBranchAddress("TPC_primary_vtx_track_eta", TPC_primary_vtx_track_eta, &b_TPC_primary_vtx_track_eta);
   fChain->SetBranchAddress("TPC_primary_vtx_track_phi", TPC_primary_vtx_track_phi, &b_TPC_primary_vtx_track_phi);
   fChain->SetBranchAddress("TPC_primary_vtx_pT", TPC_primary_vtx_pT, &b_TPC_primary_vtx_pT);
   fChain->SetBranchAddress("TPC_primary_vtx_eta", TPC_primary_vtx_eta, &b_TPC_primary_vtx_eta);
   fChain->SetBranchAddress("TPC_primary_vtx_phi", TPC_primary_vtx_phi, &b_TPC_primary_vtx_phi);
   fChain->SetBranchAddress("TPC_primary_vtx_impact_point_X", TPC_primary_vtx_impact_point_X, &b_TPC_primary_vtx_impact_point_X);
   fChain->SetBranchAddress("TPC_primary_vtx_impact_point_Y", TPC_primary_vtx_impact_point_Y, &b_TPC_primary_vtx_impact_point_Y);
   fChain->SetBranchAddress("TPC_primary_vtx_impact_point_Z", TPC_primary_vtx_impact_point_Z, &b_TPC_primary_vtx_impact_point_Z);
   fChain->SetBranchAddress("TPC_main_vtx_track_charge", TPC_main_vtx_track_charge, &b_TPC_main_vtx_track_charge);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClusters_Total", TPC_main_vtx_track_nClusters_Total, &b_TPC_main_vtx_track_nClusters_Total);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClusters_TPCV1", TPC_main_vtx_track_nClusters_TPCV1, &b_TPC_main_vtx_track_nClusters_TPCV1);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClusters_TPCV2", TPC_main_vtx_track_nClusters_TPCV2, &b_TPC_main_vtx_track_nClusters_TPCV2);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClusters_TPCVmain", TPC_main_vtx_track_nClusters_TPCVmain, &b_TPC_main_vtx_track_nClusters_TPCVmain);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClusters_TPCVgap", TPC_main_vtx_track_nClusters_TPCVgap, &b_TPC_main_vtx_track_nClusters_TPCVgap);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClustersPotential_Total", TPC_main_vtx_track_nClustersPotential_Total, &b_TPC_main_vtx_track_nClustersPotential_Total);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClustersdEdX_Total", TPC_main_vtx_track_nClustersdEdX_Total, &b_TPC_main_vtx_track_nClustersdEdX_Total);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClustersdEdX_TPCV1", TPC_main_vtx_track_nClustersdEdX_TPCV1, &b_TPC_main_vtx_track_nClustersdEdX_TPCV1);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClustersdEdX_TPCV2", TPC_main_vtx_track_nClustersdEdX_TPCV2, &b_TPC_main_vtx_track_nClustersdEdX_TPCV2);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClustersdEdX_TPCVmain", TPC_main_vtx_track_nClustersdEdX_TPCVmain, &b_TPC_main_vtx_track_nClustersdEdX_TPCVmain);
   fChain->SetBranchAddress("TPC_main_vtx_track_nClustersdEdX_TPCVgap", TPC_main_vtx_track_nClustersdEdX_TPCVgap, &b_TPC_main_vtx_track_nClustersdEdX_TPCVgap);
   fChain->SetBranchAddress("TPC_main_vtx_track_EnergyClusters_Total", TPC_main_vtx_track_EnergyClusters_Total, &b_TPC_main_vtx_track_EnergyClusters_Total);
   fChain->SetBranchAddress("TPC_main_vtx_track_EnergyClusters_TPCV1", TPC_main_vtx_track_EnergyClusters_TPCV1, &b_TPC_main_vtx_track_EnergyClusters_TPCV1);
   fChain->SetBranchAddress("TPC_main_vtx_track_EnergyClusters_TPCV2", TPC_main_vtx_track_EnergyClusters_TPCV2, &b_TPC_main_vtx_track_EnergyClusters_TPCV2);
   fChain->SetBranchAddress("TPC_main_vtx_track_EnergyClusters_TPCVmain", TPC_main_vtx_track_EnergyClusters_TPCVmain, &b_TPC_main_vtx_track_EnergyClusters_TPCVmain);
   fChain->SetBranchAddress("TPC_main_vtx_track_EnergyClusters_TPCVgap", TPC_main_vtx_track_EnergyClusters_TPCVgap, &b_TPC_main_vtx_track_EnergyClusters_TPCVgap);
   fChain->SetBranchAddress("TPC_main_vtx_track_chi2", TPC_main_vtx_track_chi2, &b_TPC_main_vtx_track_chi2);
   fChain->SetBranchAddress("TPC_main_vtx_track_ndf", TPC_main_vtx_track_ndf, &b_TPC_main_vtx_track_ndf);
   fChain->SetBranchAddress("TPC_primary_vtx_track_charge", TPC_primary_vtx_track_charge, &b_TPC_primary_vtx_track_charge);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClusters_Total", TPC_primary_vtx_track_nClusters_Total, &b_TPC_primary_vtx_track_nClusters_Total);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClusters_TPCV1", TPC_primary_vtx_track_nClusters_TPCV1, &b_TPC_primary_vtx_track_nClusters_TPCV1);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClusters_TPCV2", TPC_primary_vtx_track_nClusters_TPCV2, &b_TPC_primary_vtx_track_nClusters_TPCV2);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClusters_TPCVmain", TPC_primary_vtx_track_nClusters_TPCVmain, &b_TPC_primary_vtx_track_nClusters_TPCVmain);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClusters_TPCVgap", TPC_primary_vtx_track_nClusters_TPCVgap, &b_TPC_primary_vtx_track_nClusters_TPCVgap);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClustersPotential_Total", TPC_primary_vtx_track_nClustersPotential_Total, &b_TPC_primary_vtx_track_nClustersPotential_Total);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClustersdEdX_Total", TPC_primary_vtx_track_nClustersdEdX_Total, &b_TPC_primary_vtx_track_nClustersdEdX_Total);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClustersdEdX_TPCV1", TPC_primary_vtx_track_nClustersdEdX_TPCV1, &b_TPC_primary_vtx_track_nClustersdEdX_TPCV1);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClustersdEdX_TPCV2", TPC_primary_vtx_track_nClustersdEdX_TPCV2, &b_TPC_primary_vtx_track_nClustersdEdX_TPCV2);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClustersdEdX_TPCVmain", TPC_primary_vtx_track_nClustersdEdX_TPCVmain, &b_TPC_primary_vtx_track_nClustersdEdX_TPCVmain);
   fChain->SetBranchAddress("TPC_primary_vtx_track_nClustersdEdX_TPCVgap", TPC_primary_vtx_track_nClustersdEdX_TPCVgap, &b_TPC_primary_vtx_track_nClustersdEdX_TPCVgap);
   fChain->SetBranchAddress("TPC_primary_vtx_track_EnergyClusters_Total", TPC_primary_vtx_track_EnergyClusters_Total, &b_TPC_primary_vtx_track_EnergyClusters_Total);
   fChain->SetBranchAddress("TPC_primary_vtx_track_EnergyClusters_TPCV1", TPC_primary_vtx_track_EnergyClusters_TPCV1, &b_TPC_primary_vtx_track_EnergyClusters_TPCV1);
   fChain->SetBranchAddress("TPC_primary_vtx_track_EnergyClusters_TPCV2", TPC_primary_vtx_track_EnergyClusters_TPCV2, &b_TPC_primary_vtx_track_EnergyClusters_TPCV2);
   fChain->SetBranchAddress("TPC_primary_vtx_track_EnergyClusters_TPCVmain", TPC_primary_vtx_track_EnergyClusters_TPCVmain, &b_TPC_primary_vtx_track_EnergyClusters_TPCVmain);
   fChain->SetBranchAddress("TPC_primary_vtx_track_EnergyClusters_TPCVgap", TPC_primary_vtx_track_EnergyClusters_TPCVgap, &b_TPC_primary_vtx_track_EnergyClusters_TPCVgap);
   fChain->SetBranchAddress("TPC_primary_vtx_track_chi2", TPC_primary_vtx_track_chi2, &b_TPC_primary_vtx_track_chi2);
   fChain->SetBranchAddress("TPC_primary_vtx_track_ndf", TPC_primary_vtx_track_ndf, &b_TPC_primary_vtx_track_ndf);
   fChain->SetBranchAddress("TPC_main_vtx_nTracks", &TPC_main_vtx_nTracks, &b_TPC_main_vtx_nTracks);
   fChain->SetBranchAddress("TPC_primary_vtx_nTracks", &TPC_primary_vtx_nTracks, &b_TPC_primary_vtx_nTracks);
   fChain->SetBranchAddress("PSD_module_Number", &PSD_module_Number, &b_PSD_module_Number);
   fChain->SetBranchAddress("PSD_section_Number", &PSD_section_Number, &b_PSD_section_Number);
   fChain->SetBranchAddress("PSD_module_X", PSD_module_X, &b_PSD_module_X);
   fChain->SetBranchAddress("PSD_module_Y", PSD_module_Y, &b_PSD_module_Y);
   fChain->SetBranchAddress("PSD_module_Z", PSD_module_Z, &b_PSD_module_Z);
   fChain->SetBranchAddress("PSD_module_Energy", PSD_module_Energy, &b_PSD_module_Energy);
   fChain->SetBranchAddress("PSD_module_Energy_default", PSD_module_Energy_default, &b_PSD_module_Energy_default);
   fChain->SetBranchAddress("PSD_module_number_of_sections", PSD_module_number_of_sections, &b_PSD_module_number_of_sections);
   fChain->SetBranchAddress("PSD_section_Energy", PSD_section_Energy, &b_PSD_section_Energy);
   fChain->SetBranchAddress("PSD_section_Number_array", PSD_section_Number_array, &b_PSD_section_Number_array);
   fChain->SetBranchAddress("PSD_Energy", &PSD_Energy, &b_PSD_Energy);
   fChain->SetBranchAddress("PSD_1_Energy", &PSD_1_Energy, &b_PSD_1_Energy);
   fChain->SetBranchAddress("PSD_2_Energy", &PSD_2_Energy, &b_PSD_2_Energy);
   fChain->SetBranchAddress("PSD_3_Energy", &PSD_3_Energy, &b_PSD_3_Energy);
   fChain->SetBranchAddress("BPD_Status", BPD_Status, &b_BPD_Status);
   fChain->SetBranchAddress("BPD_Position", BPD_Position, &b_BPD_Position);
   fChain->SetBranchAddress("BPD_PositionError", BPD_PositionError, &b_BPD_PositionError);
   fChain->SetBranchAddress("triggersADC", triggersADC, &b_triggersADC);
   fChain->SetBranchAddress("isTriggers_Simple", isTriggers_Simple, &b_isTriggers_Simple);
   fChain->SetBranchAddress("isTriggers_Combined", isTriggers_Combined, &b_isTriggers_Combined);
   fChain->SetBranchAddress("WFA_TimeStructure", WFA_TimeStructure, &b_WFA_TimeStructure);
   fChain->SetBranchAddress("WFA_NumberOfSignalHits", WFA_NumberOfSignalHits, &b_WFA_NumberOfSignalHits);
   fChain->SetBranchAddress("FitVertexX", &FitVertexX, &b_FitVertexX);
   fChain->SetBranchAddress("FitVertexY", &FitVertexY, &b_FitVertexY);
   fChain->SetBranchAddress("FitVertexZ", &FitVertexZ, &b_FitVertexZ);
   fChain->SetBranchAddress("FitVertexQ", &FitVertexQ, &b_FitVertexQ);
   Notify();
}

Bool_t fTreeQA::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void fTreeQA::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t fTreeQA::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef fTreeQA_cxx
