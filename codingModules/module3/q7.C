#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t firstNumber;
    int32_t secondNumber;
    scanf("%d %d", &firstNumber, &secondNumber);
    int32_t sum =  firstNumber + secondNumber;
    printf("%d\n",sum);
    return 0;
}