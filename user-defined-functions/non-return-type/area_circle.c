//Area of Circle
#include <stdio.h>
#define PI 3.141592653589793

void area(float r);

int main() {
    float r, a;
    printf("Enter radius: ");
    scanf("%f", &r);
    area(r);
    return 0;
}

void area(float r){
    float a;
    a = PI*r*r;
    printf("The area of the circle is : %f", a);
}
