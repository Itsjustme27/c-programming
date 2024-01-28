//WAP to calculate the volume of cylinder.

#include <stdio.h>
#define PI 3.14

void main() {
    float r, h, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);
    printf("\nEnter the height of the cylinder: ");
    scanf("%d", &h);
    volume = PI * r * r * h / 3;
    printf("\nThe volume of the cylinder is %f\n", volume);
}