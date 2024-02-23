//SUM!!
#include <stdio.h>

void sum(int a, int b);

void main(){
    int a,b, s;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    sum(a,b);
}

void sum(int a, int b){
    int c;
    c = a + b;
    printf("Sum : %d", c);
}

