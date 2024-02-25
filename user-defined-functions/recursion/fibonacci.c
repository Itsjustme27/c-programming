//Fibonacci series
#include <stdio.h>
int fib(int n);
int main() {
    int n;
    printf("The fibonacci series: ");
    for(n = 0; n < 10; n++)
        printf("%d\t", fib(n));
    return 0;
}

int fib(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}