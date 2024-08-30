#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


char* skipping(const char* string, size_t n)
{
    char* array = calloc(n/2+1, sizeof(char));
    for (size_t i = 0; i < n; i++) {
        array[i] = string[2*i];
    }
    return array;
}

int main(void)
{
    char* s = skipping("0123456789", 10);
    printf("%s\n", s);
    free(s);
}