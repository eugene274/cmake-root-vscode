#include <iostream>
#include <FlowVectorNA61Selector.h>

#include <TFile.h>
#include <TTree.h>

using namespace std;


int main(int argc, char** argv) {
    if (argc < 2) {
        cerr << "No input file specified" << endl;
        return 1;
    }

    if (argc < 3) {
        cerr << "No output file specified" << endl;
        return 1;
    }

    TFile* input  = new TFile(argv[1]);
    TFile* output = new TFile(argv[2], "RECREATE");

    FlowVectorNA61Selector selector((TTree*) input->Get("fDataTree"));
    selector.Loop();
    
    if (input->IsOpen()) {
        input->Close();
    }

    if (output->IsOpen()) {
        output->Close();
    }




}

