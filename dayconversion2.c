//WAP to enter days and convert it into month and day.
#include <stdio.h>

int main(){
    int d , m , rd;
    printf("Enter the day: ");
    scanf("%d", &d);
    m = (d % 365) / 30;
    rd = (d % 365) % 30;
    printf("%d month(s), %d day(s)", m, rd);
    return 0;
}