#include <stdio.h>
#include <stdint.h>

int main(void){
    int32_t num = 98;
    int32_t* ptr = NULL;
    ptr = &num;
    printf("%d\n", *ptr);
    *ptr = 33;
    printf("%d\n", *ptr);
}