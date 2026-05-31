//Atharva Nayak 
//0905CS241063

#include<stdio.h>
int main(){
    float f,c;
    printf("Enter temperature in Fahrenheit degrees ");
    scanf("%f",&f);
    c = 5/9.0 * (f-32);
    printf("Temperature in centigrade degrees = %f\n", c);
    return 0;
}