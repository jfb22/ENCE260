#include <stdio.h>
#include <stdint.h>

void printArray(int32_t* array, int32_t n)
{
    printf("%d numbers entered\n", n);
    for (size_t i = 0; i < n; i++) {
        printf("%d\n", *array);
        array++;
    }
}

int main(void) {
    int32_t array[100] = {0};
    int32_t num = 0;
    int32_t sizeOfArray = 0;
    do {
        scanf("%d", &num);
        if (num != -1 && sizeOfArray < 100) {
            array[sizeOfArray] = num;
            sizeOfArray++;
        }
    } while (num != -1 && sizeOfArray < 100);

    printArray(array, sizeOfArray);
    return 0;
}
