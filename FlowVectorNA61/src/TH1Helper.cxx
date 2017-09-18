#include <iostream>
#include <map>
#include <string>
#include <TH1.h>

#include <TH1Helper.h>

using namespace std;

TH1Helper::TH1Helper(void) 
{
    this->hist_map = new map<TH1D*,Double_t*>();
    return;
}

TH1Helper::~TH1Helper(void)
{
    this->SaveAll();
}

void TH1Helper::FillAll(void)
{
    for (pair<TH1D*,Double_t*> pp : *(this->hist_map))
    {
        TH1D* hist = get<0>(pp);
        Double_t* val = get<1>(pp);
        #ifdef TH1HELPER_DEBUG
        cout << "Fill " << hist->GetName() << endl;
        #endif
        hist->Fill(*val);
    }
}

void TH1Helper::SaveAll(void) 
{
    for (pair<TH1D*,Double_t*> pp : *(this->hist_map))
    {
        TH1D* hist = get<0>(pp);
        hist->SaveAs("test.C");
    }   
}