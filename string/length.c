//WAP to find the length of a string
#include <stdio.h>
#include <string.h>

void main() {
    char a[10], b[10];
    printf("Enter string A: ");
    gets(a);
    printf("Enter string B: ");
    gets(b);
    printf("The length of the string is %d", strlen(a));
    printf("\nThe reverse of the string is: %s", strrev(a));
    printf("\nThe copy of the string : %s", strcpy(a, b));
    printf("\nThe concat A and B is : %s", strcat(a,b));
    printf("\nThe uppercase of the string A is: %s", strupr(a));
    printf("\nThe lower case of the string A: %s", strlwr(a));
}