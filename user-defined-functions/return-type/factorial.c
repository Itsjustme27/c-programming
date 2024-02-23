//factorial 

#include <stdio.h>

int fact(int n);

int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The factorial is : %d", fact(n));
    return 0;
}

int fact(int n){
    int f = 1, i;
    for(i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}