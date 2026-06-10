//Atharva Nayak
//0905CS241063

#include<stdio.h>

int main()
{
    int m;
    printf("Enter your marks");
    scanf("%d",&m);

    if(m>=90)
        printf("A");
    else if(m>=75)
        printf("B");
    else if(m>=60)
        printf("C");
    else if(m>=40)
        printf("D");
    else
        printf("F");

    return 0;
}