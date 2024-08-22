#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char random;
    int8_t junk;
} Data_t;

Data_t* newData(char random, int8_t junk)
{
    Data_t* ptr = malloc(sizeof(Data_t)); 
    ptr -> junk = junk;
    ptr -> random = random;
    return ptr;
}

void freeData(Data_t* data)
{
    free(data);
}

int main(void)
{
    Data_t* data = newData('A', 1);
    printf("%c %d\n", data->random, data->junk);
    freeData(data);
}