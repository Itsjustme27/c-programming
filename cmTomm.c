//WAP to convert centimeter to milimeter.
#include<stdio.h>

int main(){
    int mm,cm;
    printf("Enter the value in centimeters: ");
    scanf("%d",&cm);
    mm = cm * 10;
    printf("\n%d Centimeters is equal to %d Millmeter.",mm,cm);
    return 0;
}