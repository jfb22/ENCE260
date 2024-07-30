#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int count = 0;
    char c;
    
    do {
        c = getchar();
        count++;
    } while (c != 'q');
    
    printf("%d\n", count);
    
    return 0;
}