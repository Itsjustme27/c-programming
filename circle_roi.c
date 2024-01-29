//WAP to input circle is real or imaginary.
#include<stdio.h>

void main() {
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    if (r > 0){
        printf("\nThe entered circle is real.\n");
    }else{
        printf("\nThe entered circle is imaginary.");
    }
}