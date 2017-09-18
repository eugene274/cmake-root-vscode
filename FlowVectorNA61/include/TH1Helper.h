#ifndef TH1HELPER_H
#define TH1HELPER_H

// #define TH1HELPER_DEBUG

#include <map>
#include <TH1.h>

class TH1Helper {

public:
    TH1Helper(void);
     ~TH1Helper(void);
    void FillAll();
    void SaveAll();
    std::map<TH1D*,Double_t*>* GetMap() {return this->hist_map;}
    void Put(TH1D* hist,Double_t* pp) {this->hist_map->insert(std::pair<TH1D*,Double_t*>(hist, pp));}
    
private:
    std::map<TH1D*,Double_t*>* hist_map;
    
};

#endif