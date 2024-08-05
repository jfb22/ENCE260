#include <stdio.h>
#include <stdint.h>

void printArray(int32_t* array, size_t n)
{
    printf("%d numbers entered", n);
    for(size_t i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
}


int main(void){
    uint8_t array[100] = {0};
    int32_t num = 0;
    int32_t sizeOfArray = 0;
    do {
        scanf("%d", &num);
        array[sizeOfArray] = num;
        sizeOfArray ++ ;
    } while (num != -1 );
    printArray(array, sizeOfArray);
}