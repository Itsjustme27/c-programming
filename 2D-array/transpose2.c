/*Transpose of 3x3 matrix*/
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], i,j;
    printf("Enter a 3x3 matrix: ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    /*display matrix*/
    printf("The 3x3 matrix:\n ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    /*Transposing*/
    printf("\n\nThe Transposed Matrix:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            b[i][j] = a[j][i];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}