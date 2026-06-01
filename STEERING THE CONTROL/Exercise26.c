//Atharva Nayak
//0905CS241063

#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    if(n%5==0 && n%11==0)
        printf("Divisible");
    else
        printf("Not Divisible");

    return 0;
}