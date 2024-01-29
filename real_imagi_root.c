//WAP to input ABC of quadratic equation then check the root is real or imaginary.
#include <stdio.h>

void main(){
    float a,b,c, x1;
    printf("Enter coefficients A, B and C: ");
    scanf("%f %f %f", &a, &b, &c);
    x1 = b*b - 4*a*c;
    if (x1 > 0){
        printf("The root of the quadratic equation is real");
    }else{
        printf("The roots of the quadratic equation is imaginary");
    }
}