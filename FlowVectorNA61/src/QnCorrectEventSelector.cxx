#include "Macro.h"
#include <QnCorrectEventSelector.h>

#include <TH1.h>
#include <TH2.h>
#include <Math/Point3D.h>
#include <Math/Vector3D.h>

#include <iostream>

using namespace std;
using namespace ROOT::Math;
using namespace TMath;

void QnCorrectEventSelector::Begin(TTree* tree) {
    cout << "QnCorrection..." << endl;
    
    new TH1D("c_1", "cos(1*\\phi)", 100, -1, 1);
    new TH1D("c_2", "cos(2*\\phi)", 100, -1, 1);
    new TH1D("c_3", "cos(3*\\phi)", 100, -1, 1);
    
    new TH1D("s_1", "sin(1*\\phi)", 100, -1, 1);
    new TH1D("s_2", "sin(2*\\phi)", 100, -1, 1);
    new TH1D("s_3", "sin(3*\\phi)", 100, -1, 1);
}

Bool_t QnCorrectEventSelector::Process(Long64_t entry) {
    
    fReader.SetEntry(entry);
    
    Int_t Multiplicity = *nTracks;
    
    
    XYZPointD Q_Vector;
    for (int i = 0; i < Multiplicity; i++) {
        DataTreeTrack* track_1 = (DataTreeTrack*) (*arrTracks).At(i);
        
        XYZVectorD pp = {track_1->GetPx(0), track_1->GetPy(0), track_1->GetPz(0)};
        XYZVectorD pT = {pp.X(), pp.Y(), 0.0};
        
        Q_Vector += pT.Unit();
        
        
        FILL(TH1D*, "c_1", Cos(  pp.Phi()));
        FILL(TH1D*, "c_2", Cos(2*pp.Phi()));
        FILL(TH1D*, "c_3", Cos(3*pp.Phi()));
        FILL(TH1D*, "s_1", Sin(  pp.Phi()));
        FILL(TH1D*, "s_2", Sin(2*pp.Phi()));
        FILL(TH1D*, "s_3", Sin(3*pp.Phi()));
        
    }

    return kTRUE;
}

void QnCorrectEventSelector::Terminate() {
    
    c_1 = GET(TH1D*, "c_1")->GetMean();
    c_2 = GET(TH1D*, "c_2")->GetMean();
    c_3 = GET(TH1D*, "c_3")->GetMean();
    s_1 = GET(TH1D*, "s_1")->GetMean();
    s_2 = GET(TH1D*, "s_2")->GetMean();
    s_3 = GET(TH1D*, "s_2")->GetMean();
    
    
    {
        Double_t data[3] = {c_1, s_1, 0.0};
        u_Correction_0 = new TVectorD(3, data);
    }
    
    
    u_Correction_1 = new TMatrixD(3,3);
    {
        Double_t data[9] = {
            1 - c_2,   - s_2, 0.0,
            - s_2, 1 + c_2, 0.0,
            0  ,       0, 1.0 
        };
        
        u_Correction_1->SetMatrixArray(data);
    }
    
    
    cout << "===========u_Correction_0==============";
    u_Correction_0->Print();
    
    cout << "===========u_Correction_1==============";
    u_Correction_1->Print();
    
    u_Correction_0->Write("u_Correction_0");
    u_Correction_1->Write("u_Correction_1");
    qn_Corr_Drop->Write();
    
}