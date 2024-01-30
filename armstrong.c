//WAP to take a input and check if it is armstrong number or not.
#include <stdio.h>
#include<math.h>

void main() {
    int rem, sum, n,a;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    a == n;
    while (n != 0) {
        rem = n % 10;
        sum = sum + pow(rem,3);
        n /= 10;
        
    }
    if (a == sum){
        printf("The number is armstrong");
    }else{
        printf("The number is  not an armstrong number");
    }
}