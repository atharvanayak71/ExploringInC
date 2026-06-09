//Atharva Nayak
//0905CS241063

#include <stdio.h>
float areacircle(float r);

int main()
{
    float area;
    float radius = 2.0;
    area = areacircle(radius);
    printf("area = %f\n", area);
    return 0;
}

float areacircle(float r)
{
    float a;
    a = 3.14 * r * r;
    printf("a = %f\n", a);
    return a;
}
