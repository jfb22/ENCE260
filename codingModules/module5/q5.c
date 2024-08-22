# include <stdio.h>
#include <string.h>

int main() 
{
    int c;  // Use int to accommodate the EOF value (-1)

    while ((c = getchar()) != EOF) {
        printf("%d\n", c);  // Print the decimal value of the character
    }

    return 0;
}