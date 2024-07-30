#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

uint32_t countRushes(float screeHeight, float rushHeight, float slideBack)
{
    uint32_t NumberOfRushes = 0;
    float CurrentHeight = 0;
    while (CurrentHeight < screeHeight) {
        NumberOfRushes ++ ;
        CurrentHeight = CurrentHeight + rushHeight ;
        if (CurrentHeight >= screeHeight) {
            return NumberOfRushes ;
        } else {
            CurrentHeight = CurrentHeight - slideBack;
        }  
    }
    return NumberOfRushes;
}

int main(void)
{
    printf("%d\n", countRushes(100, 50, 10));
    printf("%d\n", countRushes(100, 100, 90));
    printf("%d\n", countRushes(0, 100, 30));
    printf("%d\n", countRushes(1.0, 0.5, 0.1));
    return 0;
}