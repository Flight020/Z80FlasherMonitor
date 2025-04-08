#ifndef BUS_STATE_H
#define BUS_STATE_H

#include <stdbool.h>


typedef enum
{
    eSlave,
    eReadDirect,
    eWriteDirect,
    eReadMaster,
    eWriteMaster
} BS_State_t;

typedef enum
{
    eSetSlave,
    eSetRead,
    eSetWrite
} BS_Event_t;

typedef struct BS_transitionguards
{
    bool master_guard;
} BS_TransitionGuards_t;

BS_State_t BS_getState(void);
bool BS_setEvent(BS_Event_t event, BS_TransitionGuards_t guards);


#endif