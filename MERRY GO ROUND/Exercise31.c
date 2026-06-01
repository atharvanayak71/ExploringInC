//Atharva Nayak
//0905CS241063

#include<stdio.h>
int main(){
    int r1 = 10000, w1 = 2000, r2, w2;
    float a = 0.01, b = 0.005, c = 0.00001, d = 0.01;
    for(int i = 1; i<=1000; i++){
        r2 = (1+a)*r1-c*r1*w1;
        w2 = (1-b)*w1+c*d*r1*w1;

        if(i%25==0){
            printf("After %d days the population of Rabbits are %d and population of wolves are %d\n",i,r2,w2);
            r1=r2;
            w1=w2;
        }
    }
    return 0;

}