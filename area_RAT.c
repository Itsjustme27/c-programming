#include <stdio.h>

void main() {
    float h,b,area;
    printf("Enter height of the right angled triangle: ");
    scanf("%d", &h);
    printf("Enter base of the right angled triangle: ");
    scanf("%d", &b);
    area = 0.5 * (b*h);
    printf("\nThe area of the right angled triangle is %f.", area);
}