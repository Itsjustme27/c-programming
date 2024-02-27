//WAP to compute sum of element of an array
#include <stdio.h>
#include <conio.h>

void main() {
    int x[5] = {1,2,3,4,5};
    int *p, sum, i;
    i = 0;
    p = x;
    printf("Element value Address\n\n");
    while(i  < 5){
        printf("x[%d]\t %d\t %p\n", i, *p, p);
        sum = sum + *p;
        i++;
        p++;
    }
    printf("\nSum = %d", sum);
    printf("\n&x[0] = %p", &x[0]);
    printf("\np = %p", p);
    getch();
}