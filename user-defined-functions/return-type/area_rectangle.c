//Area of rectangle (return type)

#include <stdio.h>

float area(float l, float b);

int main() {
    float l, b;
    printf("enter the length: ");
    scanf("%f", &l);
    printf("Enter the breadth: ");
    scanf("%f", &b);
    printf("The area of rectangle is : %f", area(l,b));
    return 0;
}

float area(float l, float b){
    int a;
    a = (l*b);
    return a;
}