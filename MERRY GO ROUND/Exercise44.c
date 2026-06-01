//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int n;

    do{
        printf("Enter number (0 to stop): ");
        scanf("%d",&n);
        printf("You entered: %d\n",n);
    }while(n!=0);

    return 0;
}