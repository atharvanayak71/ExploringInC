//Atharva Nayak
//0905CS241063

#include <stdio.h>
float *jamboree(float *r);

int main()
{
    float p = 23.5;
    float *q;

    q = &p;

    printf("q before call = %p\n", q);

    q = jamboree(&p);

    printf("q after call = %p\n", q);

    return 0;
}

float *jamboree(float *r)
{
    r = r + 1;
    return r;
}