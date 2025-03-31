
#include "SerialLink.h"
#include "CommandTypes.h"
#include "Flasher.h"

#include <string.h>

//Typedefs
typedef enum 
{
    eFlasher,
    eMonitor,
    eInitial
} FM_State_t;

//Static Fields
static FM_State_t FM_state = eInitial;
static SL_CommandPrototype_t command = {0};
static SL_ResponsePrototype_t response = {0};

//Static Functions
static void FM_vSetState(FM_State_t);
static void FM_vProcessCommand(SL_CommandPrototype_t*, SL_ResponsePrototype_t*);


void FM_vFlasherMonitor_main(void)
{

    while(1)
    {
        if(SL_bNextCommand(&command))
        {
            FM_vProcessCommand(&command, &response);
            SL_vSendResponse(&response);
            memset((uint8_t*)&response, 0, sizeof(SL_ResponsePrototype_t));
        }


        //TODO: Check status flags of Monitor

    }
}


static void FM_vSetState(FM_State_t state)
{
    switch(state)
    {
        case eFlasher:
        //TODO: Implement FL_SetActive()
        FM_state = state;
        break;
        
        case eMonitor:
        //TODO: Implement MN_SetActive()
        FM_state = state;
        break;
        
        default:
        //Invalid state, do nothing
        break;
    }
}

void FM_vProcessCommand(SL_CommandPrototype_t* command, SL_ResponsePrototype_t* response)
{
    switch(command->command)
    {
        case eSetState:
            {
                SetStateCommand_t* state_command = (SetStateCommand_t*) command;
                if(state_command->state == eInitial)
                {
                   //Can't return to initial state
                   NAKResponse_t* NAK_Response = (NAKResponse_t*) response;
                   NAK_Response->response = eNAK;
                   NAK_Response->reason = eInvalidState;
                }
                FM_vSetState(state_command->state);
                ACKResponse_t* ACK_Response = (ACKResponse_t*) response;
                ACK_Response->response = eACK;
                ACK_Response->length = 0;
            }
        break;

        case eSetPC:
            FL_vSetPC((SetPCCommand_t*)command, response);
        break;

        case eSetIncrement:
            FL_vSetIncrement((SetIncrementCommand_t*)command, response);
        break;

        case eWrite:
            FL_vWrite((WriteCommand_t*) command, response);
        break;

        case eRead:
            FL_vRead((ReadCommand_t*) command, response);
        break;
        case eWriteAt:
            FL_vWriteAt((WriteAtCommand_t*) command, response);
        break;

        case eReadFrom:
            FL_vReadFrom((ReadFromCommand_t*) command, response);
        break;

        default:
        {
            NAKResponse_t* NAK_Response = (NAKResponse_t*) response;
            NAK_Response->response = eNAK;
            NAK_Response->reason = eInvalidCommand;
        }
        break;
    }
}