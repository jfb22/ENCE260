#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t num = 20; // Line 1 
    int32_t* ptr = NULL; // Line 2

    ptr = &num; // Line 3

    printf("The value of number is %d and it is at address %p\n", num, &num);
    printf("The value of pointer is %p and it is at address %p\n", ptr, &ptr);
    printf("The value pointed to by pointer is %d\n", *ptr); // Line 4
}