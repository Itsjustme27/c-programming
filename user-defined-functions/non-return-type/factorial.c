//Factorial non-return type.

#include <stdio.h>

void fact(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact(n);
    return 0;
}

void fact(int n){
    int b , p=1;
    for(b = 1; b <= n ; b++){
        p = p*b;
    }
    printf("The factorial is: %d", p);
}