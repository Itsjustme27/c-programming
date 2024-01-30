//WAP to check whether the number is palindrome or not.
#include <stdio.h>

void main() {
    int num, rem, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    /* Calculate the reverse of the given number */
    while (num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (temp == rev){
        printf("The number is palindrome");
    }else{
        printf("The number is not palindrome");
    }
}