// Atharva Nayak
// 0905CS241063

#include <stdio.h>

float areaCircle(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float area;

    area = areaCircle(2.0);

    printf("Area = %.2f", area);

    return 0;
}