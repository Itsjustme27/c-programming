//WAP to input the elements of array then print ascending order.
#include <stdio.h>

void main() {
    int a[5], i,j,n;
    printf("Enter the elements of array: ");
    for (i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if (a[i] > a[j]){
                n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }
    printf("array in ascending order: ");
    for(i = 0; i < 5; i++){
        printf("%d\t", a[i]);
    }
}