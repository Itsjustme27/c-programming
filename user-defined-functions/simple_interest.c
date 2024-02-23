//Simple Interest
#include <stdio.h>

float si(float p, float t, float r);

int main() {
    float s, p, t, r;
    printf("Enter Principle: ");
    scanf("%f", &p);
    printf("Enter time: ");
    scanf("%f", &t);
    printf("Enter rate: ");
    scanf("%f", &r);
    s = si(p,t,r);
    printf("Simple Interest: %f", s);
    return 0;
}

float si(float p, float t, float r){
    float c;
    c = (p*t*r) / 100.0;
    return c;
}