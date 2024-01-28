//WAP to calculate perimeter of rectangle surface.
#include <stdio.h>

void main() {
    int w,h,area;
    printf("Enter width of the rectangle: ");
    scanf("%d",&w);
    printf("Enter height of the rectangle: ");
    scanf("%d", &h);
    area = 2 * (w + h);
    printf("Area of rectangle is: %d", area);
}