//WAP to display the functionality of unformatted I/O [getchar() & putchar]
#include<stdio.h>

int main(){
    printf("Enter character: ");
    char c = getchar();
    printf("The input character is \n");
    putchar(c);
    return 0;
}