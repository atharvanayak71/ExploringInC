//Atharva Nayak
//0905CS241063

#include<stdio.h>

int main()
{
    float r;
    printf("Enter Resistivity of the material:- ");
    scanf("%f",&r);

    if(r < 0.001)
        printf("Conductor");
    else if(r < 1000000)
        printf("Semiconductor");
    else
        printf("Insulator");

    return 0;
}