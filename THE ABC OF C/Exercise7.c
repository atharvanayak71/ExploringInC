//Atharva Nayak
//0905CS241063

#include<stdio.h>

int main()
{
    char ch = 127;

    printf("Before overflow: %d\n", ch);

    ch = ch + 1;

    printf("After overflow: %d\n", ch);

    return 0;
}