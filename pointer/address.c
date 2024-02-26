#include <stdio.h>

int main() {
    int a = 10;//*p;
    //p = &a;
    int *p = &a;
    printf("The address of a is %p\n", p);
    printf("The value of a is %d", *p);
    return 0;
}