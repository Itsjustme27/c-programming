#include <stdio.h>

int sum(int *, int *);

void main() {
    int a=1,b=1;
    int  *ptr1;
    int *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("sum: %d", sum(ptr1, ptr2));
}

int sum(int *x, int *y){
    int c;
    c = *x + *y;
    return c;
}