//Factorial 

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
    int f = fact(n * (n-1));
    if(n==0){
        printf("1");
    }else{
        printf("%d", f);
    }
}