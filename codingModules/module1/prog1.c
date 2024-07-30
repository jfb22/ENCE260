/* Your first mindless C program*/

#include <stdio.c>
#include <stdint.h>

int main(void)
{
    //First the declarations
    int32_t number1;
    int32_t number2;
    int32_t total;

    // Now some code 
    number1 = 10;
    number2 = 20;
    total = number1 + number2;
    printf("The sum of %d and %d is %d\n", number1, number2, total);

    return 0;
}