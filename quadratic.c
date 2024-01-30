#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c,r,x1, x2;
    printf("Enter the coefficients a,b and c: ");
    scanf("%f %f %f", &a,&b,&c);
    r = sqrt(b*b - 4*a*c);
    x1 = (-b + r) / 2*a;
    x2 = (-b - r) / 2*a;
    printf("The roots of quadratic equation are: %f & %f", x1, x2);
    return 0;
}