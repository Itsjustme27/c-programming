//area of rectangle (non return)

#include <stdio.h>

void area(float l, float b);

int main() {
    float l,b;
    printf("enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);
    area(l,b);
    return 0;
}

void area(float l, float b){
    float a;
    a = l*b;
    printf("The area of rectangle is: %f", a);
}