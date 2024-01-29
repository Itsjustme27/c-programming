//WAP to input 4 digits number then calculate the sum of the digits.
#include<stdio.h>

void main(){
    int n, sum;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);
    do{
        sum += n % 10;
        n /= 10;
    }while(n != 0);
    printf("sum: %d", sum);
}