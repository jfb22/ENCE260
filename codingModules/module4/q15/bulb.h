#ifndef BULB_H
#define BULB_H

#include <stdint.h>

typedef struct {
    uint8_t model;
    uint32_t serial_number;
} Bulb_t;

Bulb_t bulb_sellModel(uint8_t model);

void bulb_display(Bulb_t bulb);

uint32_t bulb_numSold(uint8_t model);

#endif // BULB_H 