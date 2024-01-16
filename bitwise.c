//Bitwise operator
#include <stdio.h>

int main(){
    int a = 5, b = 1;
    //a = a & b;
    int c = a >> b;
    int d = a << b;
    int e = a & b;
    printf("%d\n", c);
    printf("%d", d);
    printf("%d", e);
    return 0;
}