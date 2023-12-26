#include <stdio.h>

int main(){
    int a,b,temp;
    printf("Before: a = ");
    scanf("%d", &a);
    printf("Before: b = ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After: a = %d", a);
    printf("After: b = %d", b);
    return 0;
}