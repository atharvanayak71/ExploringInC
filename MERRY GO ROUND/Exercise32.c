//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int i,j,k,l;
    for(int l = 1; l<=1000; l++){
        for(int k = 1; k<l; k++){
            for(int j = 1; j<k; j++){
                for(int i = 1; i<j; i++){
                    if(i+j+k==l){
                        printf("%d + %d + %d = %d\n", i,j,k,l);
                    }
                }
            
            }
        }
    }
    return 0;
}