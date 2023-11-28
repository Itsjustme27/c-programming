//WAP to convert no. of days into year, month and remaining days
#include<stdio.h>

int main(){
    int d, y, m , rd;
    printf("Enter the number of days: ");
    scanf("%d", &d);
    y = (d / 365);
    m = (d % 365) / 30;
    rd = (d % 365) % 30;
    printf("\n%d year(s), %d month(s), %d day(s)", y, m, rd);
    return 0;
}