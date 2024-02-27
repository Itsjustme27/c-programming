//Implementation of chain of pointer
#include <stdio.h>
#include <conio.h>

void main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    printf("%d %d %d\n", a, *p, **q);
    printf("%p", *p);
    getch();
}