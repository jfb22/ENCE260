#include <stdio.h>
#include "bulb.h"

static uint8_t ModelNumberSold[255] = {0};

Bulb_t bulb_sellModel(uint8_t model)
{   
    Bulb_t bulb;
    bulb.model = model;
    bulb.serial_number = ModelNumberSold[model];
    ModelNumberSold[model] ++;
    return bulb;
}


void bulb_display(Bulb_t bulb)
{
    printf("Model %u, SN%06u\n", bulb.model, bulb.serial_number);
}


uint32_t bulb_numSold(uint8_t model)
{
    uint32_t buld_numsold = ModelNumberSold[model];
    return buld_numsold;
} 