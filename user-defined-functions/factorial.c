//factorial 

#include <stdio.h>

int fact(int n);

int main() {
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = fact(n);
    printf("\nFactorial of %d is %d.", n, f);
    return 0;
}
int fact(int n){
    if(n == 0)
        return 1;
    else
        return fact(n-1) * n;
}