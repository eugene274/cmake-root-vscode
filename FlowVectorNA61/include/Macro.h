#ifndef MACRO__H
#define MACRO__H

#define GET(TT,NN)  ((TT) gDirectory->Get(NN))

#define FILL(TT,NN,SS) GET(TT,NN)->Fill(SS)

#endif
