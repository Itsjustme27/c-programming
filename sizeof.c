#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;

    printf("Integer: %d\n", sizeof(a));
    printf("Float: %d\n", sizeof(b));
    printf("Character: %d\n", sizeof(c));
    printf("Double: %d", sizeof(d));
    return 0;
}