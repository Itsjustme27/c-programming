#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i, *ptr, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated");
        exit(0);
    }
    printf("Enter the element: ");
    for(i = 0; i <n; i++){
        scanf("%d", ptr+i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    free(ptr);
}