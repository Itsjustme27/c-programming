//WAP to calculate area of the circle

#include<stdio.h>

#define pi 3.14 //Declaring or defining constant value

int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    float area = (pi * r * r);
    printf("The area of the circle is: %f", area);
    return 0;
}