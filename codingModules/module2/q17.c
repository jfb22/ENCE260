#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

void printPrimesInRange(uint32_t n1, uint32_t n2)
{
    bool isPrime = false;
    for (uint8_t integerGettingChecked = n1; integerGettingChecked <= n2; integerGettingChecked++) {
        isPrime = true;
        for (uint8_t dividingInteger = 2; dividingInteger <= integerGettingChecked - 1; dividingInteger++) {
            if (integerGettingChecked % dividingInteger == 0) {
                isPrime = false;
            }
        }
        if (isPrime == true) {
            printf("%d\n", integerGettingChecked);
        } 
    }
}

int main(void)
{
    printPrimesInRange(2, 40);
    return 0;
}