//addition of pointer
#include <stdio.h>
#include <conio.h>

void main() {
    int a = 10;
    int *p = &a;
    printf("%u\n", p);
    p = p + 5;
    printf("%d\n", *p);
    printf("%u", *p);
    getch();
}