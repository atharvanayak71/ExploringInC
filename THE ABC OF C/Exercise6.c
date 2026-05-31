//Atharva Nayak
//0905CS241063  

#include<stdio.h>
int main()
{
    int days, weeks, leftoverdays;
    days = 31+29+31+30+31;
    weeks = days/7;
    leftoverdays = days%7;

    printf("days = %d\n", days);
    printf("weeks = %d\n", weeks);
    printf("leftoverdays = %d\n", leftoverdays);
    return 0;
}