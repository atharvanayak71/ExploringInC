//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0){
        sum += n%10;
        n = n/10;
    }

    printf("Sum of digits = %d\n",sum);
    return 0;
}