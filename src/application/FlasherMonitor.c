
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
} FM_Mode_t;

//Static Fields
static FM_Mode_t FM_mode = eInitial;
static SL_CommandPrototype_t command = {0};
static SL_ResponsePrototype_t response = {0};

//Static Functions
static void FM_vSetState(SetModeCommand_t* command, SL_ResponsePrototype_t* response);
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


static void FM_vSetMode(SetModeCommand_t* command, SL_ResponsePrototype_t* response)
{
    switch(command->mode)
    {
        case eFlasher:
        {
            //TODO: Implement FL_SetActive()
            FM_mode = command->mode;
            ACKResponse_t* ACK_Response = (ACKResponse_t*) response;
            ACK_Response->response = eACK;
            ACK_Response->length = 0;
        }
        break;
        
        case eMonitor:
        {
            //TODO: Implement MN_SetActive()
            FM_mode = command->mode;
            ACKResponse_t* ACK_Response = (ACKResponse_t*) response;
            ACK_Response->response = eACK;
            ACK_Response->length = 0;
        }
        break;
        
        default:
        {
            NAKResponse_t* NAK_Response = (NAKResponse_t*) response;
            NAK_Response->response = eNAK;
            NAK_Response->reason = eInvalidState;
        }
        break;
    }
}

void FM_vProcessCommand(SL_CommandPrototype_t* command, SL_ResponsePrototype_t* response)
{
    switch(command->command)
    {
        case eSetState:
                FM_vSetMode((SetModeCommand_t*)command, response);
        break;

        case eSetPC:
            FL_vSetPC((SetPCCommand_t*)command, response);
        break;

        case eSetMaster:
            FL_vSetMaster((SetMasterCommand_t*)command, response);
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