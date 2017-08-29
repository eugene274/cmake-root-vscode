#include <iostream>

#include <TFile.h>
#include <TTree.h>
#include <TMath.h>

#include <DataTreeEvent.h>

using namespace std;


Bool_t Cut(DataTreeEvent* ev)
{
    return true;
}

void Exec(DataTreeEvent* ev)
{
    Int_t nTracks = ev->GetNTracks();
    
    for (int itx = 0; itx < nTracks; itx++) {
        DataTreeTrack* track = ev->GetTrack(itx);
        cout << track->GetPt(0) << endl;


    }
}

int main(int argc, char** argv) {

    if (argc < 2) {
        cerr << "No input file specified";
        return 1;
    }

    cout << "Processing " << argv[1] << "..." << endl;
    TFile ff(argv[1]);
    
    TTree* tree = (TTree*) ff.Get("fDataTree");
    
    DataTreeEvent* ev = new DataTreeEvent();

    auto* dtEventBranch = tree->GetBranch("DTEvent");
    dtEventBranch->SetAddress(&ev);

    cout << "Looping..." << endl;

    Long64_t nentries = tree->GetEntriesFast();
    cout << "Entries: " << nentries << endl;
    for (Long64_t jentry = 1; jentry < nentries; jentry++) {
        tree->GetEntry(jentry);
        Exec(ev);

    }

}