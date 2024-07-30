#include <stdint.h>
#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int32_t value = 11;
    switch (value) {
        case 11:
            putchar('J');
        case 12:
            putchar('Q');
        case 13:
            putchar('K');
    }
    return 0;
}