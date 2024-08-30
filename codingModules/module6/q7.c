#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
    size_t length = 10;
    size_t count = 0;
    int16_t number = 0;
    int16_t* ptr = calloc(length, sizeof(int16_t));

    do {
        scanf("%hd", &number);
        ptr[count] = number;
        count ++ ; 
        if (count % 10 == 0) {
            length += 10 ;
            ptr = realloc(ptr, length*sizeof(int16_t)); 
        }
    } while (number!= -10000);

    printf("Numbers read = %zu\n", count-1);
    free(ptr);
}