#include <Macro.h>
#include <QnCorrectEventSelector.h>

#include <TH1.h>
#include <TH2.h>
#include <Math/Point3D.h>
#include <Math/Vector3D.h>

#include <iostream>

using namespace std;
using namespace ROOT::Math;
using namespace TMath;

#define COMMA ,


void QnCorrectEventSelector::Begin(TTree* tree) {
    cout << "QnCorrection..." << endl;
    
    new TH2D("Q_0", "Q_0", 
    100, -10, 10,
    100, -5, -15
    );
    
    new TH2D("xy_0", "<xy>_0", 
    100, -1, 1,
    100, -1, 1
    );

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
        Q_Vector += pp.Unit();

        /* cos(\\phi) */
        Double_t xx = pp.Unit().X();
        /* sin(\\phi) */
        Double_t yy = pp.Unit().Y();
        
        
        FILL(TH2D*, "xy_0", pp.Unit().X() COMMA pp.Unit().Y());
        FILL(TH1D*, "c_1", Cos(  pp.Phi()));
        FILL(TH1D*, "c_2", Cos(2*pp.Phi()));
        FILL(TH1D*, "c_3", Cos(3*pp.Phi()));
        FILL(TH1D*, "s_1", Sin(  pp.Phi()));
        FILL(TH1D*, "s_2", Sin(2*pp.Phi()));
        FILL(TH1D*, "s_3", Sin(3*pp.Phi()));
        
    }
    
    FILL(TH2D*, "Q_0", Q_Vector.X() COMMA Q_Vector.Y());
    
    return kTRUE;
}

void QnCorrectEventSelector::Terminate() {
    
    TH2D* Q_0 = GET(TH2D*, "Q_0");
    TH2D* xy_0 = GET(TH2D*, "xy_0");

    TH1D* c_1 = GET(TH1D*, "c_1");
    TH1D* c_2 = GET(TH1D*, "c_2");
    TH1D* c_3 = GET(TH1D*, "c_3");
    
    TH1D* s_1 = GET(TH1D*, "s_1");
    TH1D* s_2 = GET(TH1D*, "s_2");
    TH1D* s_3 = GET(TH1D*, "s_3");
    
    
    
    TFile* Output_File = new TFile("qn_corr.root", "RECREATE");
    
    Q_0->Write();
    xy_0->Write();

    c_1->Write();
    c_2->Write();
    c_3->Write();
    
    s_1->Write();
    s_2->Write();
    s_3->Write();
    
    Output_File->Close();

    cout << "<cos^2> + <sin^2> = " << Power(c_1->GetMean(), 2.0) + Power(c_2->GetMean(), 2.0) << endl;
    cout << "u_0_x = " << c_1->GetMean() << "; " << "u_0_y = " << s_1->GetMean() << endl; 
}