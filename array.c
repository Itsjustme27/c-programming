#include <stdio.h>

void main() {
    int a[5];
    printf("Enter the elements of array: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: ");
    for( int i = 0;i < 5;i++){
        printf("%d\t", a[i]);
    }
}