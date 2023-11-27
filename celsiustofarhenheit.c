#include<stdio.h>

int main(){
    float c,f;
    printf("Enter celsius: ", &c);
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("The farhenheit is: %f", f);
    return 0;
}


