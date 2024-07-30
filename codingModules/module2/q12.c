#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> 

uint8_t intLog2(uint32_t value)
{
    uint8_t NumberOfTimes = 0;
    while(value > 1) {
        value = value/2;
        NumberOfTimes ++;
    }
    return NumberOfTimes;
}

int main(void)
{
    printf("%d\n", intLog2(32));
    printf("%d\n", intLog2(31));
    return 0;
}