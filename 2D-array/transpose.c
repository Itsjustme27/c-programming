/*Transpose of a 2x2 matrix*/
#include <stdio.h>

void main() {
    int a[2][2], b[2][2], i, j;
    printf("Enter the elements of 2x2 matrix: ");
    for (i = 0; i < 2; i++){
        for(j=0; j<2; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nThe entered Matrix is:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    /*Transpose of the Matrix*/
    printf("\nThe transpose of the matrix is:\n ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            b[i][j] = a[j][i];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}