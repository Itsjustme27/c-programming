//Sum userdefined

#include <stdio.h>

int sum(int a, int b);

int main(){
    int s,a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    s = sum(a,b);
    printf("um: %d", s);
}

int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}