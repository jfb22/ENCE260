#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t readString(char* string, size_t maxStringLength)
{
    size_t i = 0;
    for (i=0; i < maxStringLength; i++) {
        char character = getchar();
        if (character == EOF || character == 0x0a) {
            string[i] = '\0';
            size_t length = i;
            return length;
        } else {
            string[i] = character;
        }
    }
    size_t length = i;
    return length;
}

int main(void){
    size_t len=0;
    char string[11];
    len = readString(string, 10);
    printf("Read String (%s) of length (%zu)\n", string, len);
}