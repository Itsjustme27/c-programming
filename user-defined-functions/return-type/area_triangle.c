//Area of a triangle
#include <stdio.h>

float area(float b, float h);

int main() {
    float a, b, h;
    printf("Enter base: ");
    scanf("%f", &b);
    printf("Enter height: ");
    scanf("%f", &h);
    a = area(b,h);
    printf("The area of a triangle is: %f", a);
    return 0;
}
float area(float b, float h){
    int c;
    c = (b*h)/2;
    return c;
}