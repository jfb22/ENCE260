#include <stdio.h>
#include <stdint.h>

struct PolarVec_s
{
    uint32_t radius;
    float angle;
};

int main(void)
{
    struct PolarVec_s v;
    v.radius = 1;
    v.angle = 180;
    printf("%d\n", v.radius);
    printf("%.1f\n", v.angle);
}