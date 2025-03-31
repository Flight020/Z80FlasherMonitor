#include "Flasher.h"

static uint16_t FL_pc = 0;
static bool FL_increment = false;
static uint8_t FL_readBuffer[62] = {0};


/***************************************************************************************/
/***************************************************************************************/

void FL_vSetPC(SetPCCommand_t* command, SL_ResponsePrototype_t* response)
{
    //TODO: Implement
}

/***************************************************************************************/
/***************************************************************************************/

void FL_vSetIncrement(SetIncrementCommand_t* command, SL_ResponsePrototype_t* response)
{
    //TODO: Implement
}

/***************************************************************************************/
/***************************************************************************************/

void FL_vWrite(WriteCommand_t* command, SL_ResponsePrototype_t* response)
{
    //TODO: Implement
}

/***************************************************************************************/
/***************************************************************************************/

void FL_vRead(ReadCommand_t* command, SL_ResponsePrototype_t* response)
{
    //TODO: Implement
}

/***************************************************************************************/
/***************************************************************************************/

void FL_vWriteAt(WriteAtCommand_t* command, SL_ResponsePrototype_t* response)
{
    //TODO: Implement
}

/***************************************************************************************/
/***************************************************************************************/

void FL_vReadFrom(ReadFromCommand_t* command, SL_ResponsePrototype_t* response)
{
    //TODO: Implement
}