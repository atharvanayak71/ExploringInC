//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    switch(n%2){
        case 0:
            printf("Even\n");
            break;

        case 1:
            printf("Odd\n");
            break;
    }

    return 0;
}