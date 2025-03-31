#ifndef SERIAL_LINK_H
#define SERIAL_LINK_H

#include <stdbool.h>
#include <stdint.h>

#define PAYLOAD_LEN 63

typedef struct commandPrototype
{
    uint8_t command;
    uint8_t payload[PAYLOAD_LEN];
} SL_CommandPrototype_t;

typedef struct responsePrototype
{
    uint8_t response;
    uint8_t payload[PAYLOAD_LEN];
} SL_ResponsePrototype_t;


bool SL_bNextCommand(SL_CommandPrototype_t*);

void SL_vSendResponse(SL_ResponsePrototype_t*);



#endif