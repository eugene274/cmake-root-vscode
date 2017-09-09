#include <iostream>
#include <string>
#include <regex>

#include <TString.h>
#include <DataTreeConverterNA61.cxx>

using namespace std;


void process(string inFileName, string outFileName, int nEvents = -1)
{
    nEvents = nEvents < 0? 10000 : nEvents;

    DataTreeConverterNA61* dtConverter = new DataTreeConverterNA61();
    dtConverter->SetNEvents(nEvents);
    dtConverter->SetInputFile(inFileName);
    dtConverter->SetOutputFile(outFileName);
    dtConverter->Body();
    dtConverter->Finish();
}

string* getOutFileNameFromInFileName(string inFileName) {
    const std::regex re("TreeNA61");

    string* outFileName = new string(std::regex_replace(
        inFileName,
        re,
        "DataTree", 
        regex_constants::match_default
    ));

    return outFileName;
}



int main(int argc, char** argv)
{
    string* inFileName = nullptr;
    string* outFileName = nullptr;

    if (argc == 0) {
        cerr << "No input file" << endl;
        return 1;
    }


    /* take the first arg */
    inFileName = new string(argv[1]);
    cout << "in:\t" << *inFileName << endl;

    /* take the second arg */
    if (argc > 2) {
        outFileName = new string(argv[2]);
    } else {
        outFileName = getOutFileNameFromInFileName(*inFileName);
    }    
   
    if (
        inFileName == nullptr ||
        outFileName == nullptr ||
        *inFileName == *outFileName
    ) {
        cerr << "No out filename specified and getOutFileNameFromInFileName returned the same string" << endl;
        return 1;
    }
    
    cout << "out:\t" << *outFileName << endl;

    process (*inFileName, *outFileName);

}