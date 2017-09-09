#ifndef FLOWVECTORNA61_EVENTCUT_H
#define FLOWVECTORNA61_EVENTCUT_H

typedef struct {
    /* multiplicity */
    Int_t M;

    /* impact z-vertex position range */
    Double_t z_pos_up;
    Double_t z_pos_low;

} EventCutParams_t;


extern bool EventCut(DataTreeEvent* event, EventCutParams_t* p);

#endif
