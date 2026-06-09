//Atharva Nayak
//0905CS241063

#include <stdio.h>

int main()
{
    int z,y;
    z=recsum (1);
    y=recsum (1);
    printf ("z=%d\ny = %d",z,y);
}
recsum (i)
int i;
{
    static int sum = 0;
    if (i=3)
    return (sum);
    else
    {
        sum =sum+10;
        i++;
        recsum(i);
    }
    return 0;
}