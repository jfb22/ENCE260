#include <stdio.h>
#include <stdint.h>


int32_t accumulator(int32_t value)
{
    static uint8_t accumulator_sum = 0;
    accumulator_sum += value;
    return accumulator_sum;
}

int main(void)
{
    accumulator(3);
    accumulator(2);
    printf("%d\n", accumulator(5));
}