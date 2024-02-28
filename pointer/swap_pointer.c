#include <stdio.h>

void swap(int *, int *);

int main() {
    int x , y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("\nBefore swap: x: %d   y:%d\n", x,y);
    swap(&x, &y); //pass by reference or call by reference
    printf("After swap:  x: %d  y: %d", x,y);
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}