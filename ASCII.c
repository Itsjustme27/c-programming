#include <stdio.h>

int main(){
    char c;
    printf("Enter character: ");
    c = getchar();
    printf("The ASCII value of %c is: %d", c, c);
    return 0;
}