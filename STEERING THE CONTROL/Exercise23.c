//Atharva Nayak
//0905CS241063

#include<stdio.h>

int main()
{
    int y;
    printf("Enter year:- ");

    scanf("%d",&y);

    if(y%400==0)
        printf("Leap Year");
    else if(y%100==0)
        printf("Not Leap Year");
    else if(y%4==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}