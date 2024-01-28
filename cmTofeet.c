// WAP to convert cm to feet.

#include <stdio.h>

void main(){
    float cm,feet;
    printf("Enter the value in centimeters : ");
    scanf("%f", &cm);
    feet = cm/30.48;
    printf("\n%d  cm is equal to %f feet.", cm, feet); 
}