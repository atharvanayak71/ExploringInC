//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    switch(n>0){
        case 1:
            printf("Positive\n");
            break;

        case 0:
            switch(n<0){
                case 1:
                    printf("Negative\n");
                    break;

                case 0:
                    printf("Zero\n");
                    break;
            }
    }

    return 0;
}