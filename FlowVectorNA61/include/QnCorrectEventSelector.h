#ifndef QNCORRECTEVENTSELECTOR__H
#define QNCORRECTEVENTSELECTOR__H

#include "FVNA61EventSelector.h"
#include <Math/Vector3D.h>
#include <TMatrixD.h>
#include <TVectorD.h>

using namespace TMath;
using namespace ROOT::Math;

class QnCorrectEventSelector : public FVNA61EventSelector {
    
public:
    
    Double_t c_1;
    Double_t c_2;
    Double_t c_3;
    Double_t s_1;
    Double_t s_2;
    Double_t s_3;

    TVectorD* u_Correction_0;
    TMatrixD* u_Correction_1;
    Bool_t Ready = false;

    TFile* qn_Corr_Drop = new TFile("qn_corr.root", "RECREATE");
    
    
    QnCorrectEventSelector(TTree* tree = 0) { }
    void DoCorrection(XYZVectorD* u_Vector) {
        if (Ready) {
            Double_t coords[9];
            u_Vector->GetCoordinates(coords);
            
            TVectorD u_Uncorrected(3, coords);

            TVectorD u_Corrected_0 = u_Uncorrected - *u_Correction_0;
            TVectorD u_Corrected_1 = *u_Correction_1*u_Corrected_0;
            
            u_Vector->SetX(u_Corrected_1(0));
            u_Vector->SetY(u_Corrected_1(1));
            u_Vector->SetZ(u_Corrected_1(2));
        }
    }

    virtual void Begin(TTree* tree);
    virtual Bool_t Process(Long64_t entry);
    virtual void Terminate();
    
};

#endif