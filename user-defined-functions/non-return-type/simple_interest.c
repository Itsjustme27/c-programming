//Simple Interest

#include <stdio.h>

void si(float  p, float t, float r);

int main(){
    float p,t,r;
    printf("Enter principle amount: ");
    scanf("%f", &p);
    printf("Enter time period: ");
    scanf("%f", &t);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    si(p,t,r);
    return 0;
}

void si(float p, float t, float r){
    float s;
    s = (p*t*r) / 100;
    printf("The simple interest is : %f", s);
}