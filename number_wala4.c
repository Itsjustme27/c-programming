#include <stdio.h>

void main(){
    int a = 1,b =2;
    printf("Series of numbers\n");
    a  = a * 10 + b;
    b = b + 1;
    printf("%d%d\n", a,b);
    a = a * 10 + b;
    b = b + 1;
    printf("%d%d", a,b);
}