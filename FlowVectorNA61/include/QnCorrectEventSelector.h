#ifndef QNCORRECTEVENTSELECTOR__H
#define QNCORRECTEVENTSELECTOR__H

#include <FVNA61EventSelector.h>


using namespace TMath;

class QnCorrectEventSelector : public FVNA61EventSelector {

public:

    QnCorrectEventSelector(TTree* tree = 0) { }
    virtual void Begin(TTree* tree);
    virtual Bool_t Process(Long64_t entry);
    virtual void Terminate();

};

#endif