#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

void printRoots(float a, float b, float c)
{   
    float discriminant = b * b - 4 * a * c;
    if (a == 0) {
        printf("Not a quadratic\n");
    } else if (discriminant < 0) {
        printf("Imaginary roots\n");
    } else {
        if (a > 0) {
            float root1 = (-b - sqrt(discriminant)) / (2 * a);
            float root2 = (-b + sqrt(discriminant)) / (2 * a);
            printf("Roots are %.4f and %.4f\n", root1, root2);

        } else {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are %.4f and %.4f\n", root1, root2);
        }    
    }
}

int main(void)
{
    printRoots(1, -4, 3);
    printRoots(1, 2, 3);
    printRoots(0, 2, 3);
    printRoots(1, 0, -1);
    printRoots(-1, 0, 1);

}