#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int c;  // Use int to accommodate the EOF value (-1)

    while ((c = getchar()) != EOF) {
        if (c==10) {
            printf("'\\n'\n");
        } else if (isdigit(c)) {
            printf("'%d': Digit %d\n", c-48, c-48);
        } else if (isalpha(c)) {
            if ((c-98)<0) {
                printf("'%c': Letter %d\n", c, c-64);
            } else {
                printf("'%c': Letter %d\n", c, c-96);
            }
        } else {
            printf("'%c': Non-alphanumeric\n", c);
        }       
    }
    return 0;
}