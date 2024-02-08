#include <stdio.h>

void main() {
    int a[3][3], b[3][2], c[3][2];
    printf("Enter the elements of A: ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of B: ");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    
    printf("The multiplication of the given matrix is:\n ");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            int sum = 0;
            for (int k = 0; k < 3; k++){
                sum  = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}