#include <stdio.h>

int main() {
    char str[20], *ptr;
    int count;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while (*ptr != '\0'){
        count++;
        ptr++;
    }
    printf("The Length of the string is %d", count);
    return 0;
}