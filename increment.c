#include <stdio.h>

int main() {
    int x = 5, v,e,y,z,a;
    e = ++x;
    y = ++x;
    z = ++x;

    v = ++x * ++x + ++x;

    a = e * y + z;

    printf("%d\n", a);


    printf("%d", v);
    return 0;
}