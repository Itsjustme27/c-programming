#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;

    int i = sizeof(a);
    int f = sizeof(b);
    int z = sizeof(c);
    int x = sizeof(d);

    printf("Integer: %d\n", i);
    printf("Float: %d\n", f);
    printf("Character: %d\n", c);
    printf("Double: %d", x);
    return 0;
}