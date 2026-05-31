//Atharva Nayak
//Roll number:- 0905CS241063

#include<stdio.h>
int main(){
    int i,j,k;
    printf("Enter values of i and j\n");
    scanf("%d %d", &i, &j);
    k= i+j-i%j;

    printf("Next largest multiple = %d\n", k);
    return 0;
}