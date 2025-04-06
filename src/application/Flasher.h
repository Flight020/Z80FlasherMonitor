#ifndef FLASHER_H
#define FLASHER_H

#include <stdint.h>
#include "SerialLink.h"
#include "CommandTypes.h"

void FL_vSetPC(SetPCCommand_t* command, SL_ResponsePrototype_t* response);

void FL_vSetMaster(SetMasterCommand_t* command, SL_ResponsePrototype_t* response);

void FL_vSetIncrement(SetIncrementCommand_t* command, SL_ResponsePrototype_t* response);

void FL_vWrite(WriteCommand_t* command, SL_ResponsePrototype_t* response);

void FL_vRead(ReadCommand_t* command, SL_ResponsePrototype_t* response);

void FL_vWriteAt(WriteAtCommand_t* command, SL_ResponsePrototype_t* response);

void FL_vReadFrom(ReadFromCommand_t* command, SL_ResponsePrototype_t* response);

#endif