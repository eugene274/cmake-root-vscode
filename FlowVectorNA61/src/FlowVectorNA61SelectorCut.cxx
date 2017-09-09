#include <DataTreeEvent.h>
#include <FlowVectorNA61SelectorCut.h>



bool EventCut(DataTreeEvent* event, EventCutParams_t* p) {

    Int_t m = event->GetNTracks();

    if (m < p->M) {
        return false;
    }

    Double_t z_pos = event->GetVertexPositionComponent(2,1);

    if (! (p->z_pos_low <= z_pos && z_pos <= p->z_pos_up)) {
        return false;
    }

    return true;
}