//WAP to convert mm to cm
#include<stdio.h>

int main(){
    int mm,cm;
    printf("Enter the value in millimeters: ");
    scanf("%d",&mm);
    cm = (mm/10);
    printf("\n%d Millimeter is equal to %d Centimeters.",mm,cm);
    return 0;
}