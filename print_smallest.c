//WAP to print smallest number between two numbers.
#include <stdio.h>

void main() {
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("%d is smallest!", num2);
    }else{
        printf("%d is smallest", num1);
    }
}