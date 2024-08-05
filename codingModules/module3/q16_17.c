#include <stdio.h>
#include <stdint.h>

void printArray(int32_t* array, size_t n)
{
    for(size_t i = 0; i < n; i++) {
        printf("%d\n", *(array));
        array ++;
    }
}

int main(void){
    int32_t array[3] = {1, 2, 3};
    printArray(array, 3);
    return 0 ;
}