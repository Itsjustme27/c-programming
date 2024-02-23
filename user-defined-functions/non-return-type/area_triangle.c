//area of triangle

#include <stdio.h>

void area(float b, float h);

int main() {
    float b,h;
    printf("Enter base: ");
    scanf("%f", &b);
    printf("Enter height : ");
    scanf("%f", &h);
    area(b,h);
    return 0;
}

void area(float b, float h){
    float a;
    a = (b*h) / 2;
    printf("The  Area of the Triangle is %f\n",a);
}