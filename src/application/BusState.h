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
    eSetDirectRead,
    eSetDirectWrite,
    eSetMasterRead,
    eSetMasterWrite
} BS_Event_t;


BS_State_t BS_getState(void);
bool BS_setEvent(BS_Event_t event);


#endif