//Diagonal of a 3x3 matrix
#include <stdio.h>

void main() {
    int a[3][3], i,j;
    printf("Enter a 3x3 matrix: ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    /*Printing the 3x3 matrix*/
    printf("\nThe elements are:\n");
    for (i = 0; i <  3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    /*Printing the diagonals*/
    printf("\nThe diagonals are:\n ");
    for(i = 0; i < 3; i++){

        printf("%d\t", a[i][i]);
    }

    
}