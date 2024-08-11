#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum{
    FIRST = 1,
    SECOND = 2,
    THIRD =  3,
    FOURTH = 4,
    FIFTH = 5,
    NEUTRAL = 0,
    REVERSE = -1,
} Gear_t;


int main(void)
{
    Gear_t currentGear = FIRST;
    printf("%d\n", currentGear + THIRD);
    return 0;
}