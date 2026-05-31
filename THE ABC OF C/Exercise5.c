//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int a = 10, b = 20;
    printf("Before interchanging\n");
    printf("a= %d b = %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After interchanging\n");
    printf("a= %d b = %d\n", a,b);
    return 0;
}