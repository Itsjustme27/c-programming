/*WAP to check if whether the input triangle is a rigqht-angled triangle or not(using switch case)*/
#include <stdio.h>

void main(){
    int p,h,b;
    printf("Enter the length of the hypotenuse: "); 
    scanf("%d",&h);
    printf("Enter the length of base: ");
    scanf("%d", &b);
    printf("Enter the length of perpendicular: ");
    scanf("%d", &p);
    switch (h*h==p*p+b*b){
        case 1:
            printf("The triangle is right-angled triangle.");
            break;
        default:
            printf("The triangle is not right-angled triangle.");
            break;
    }
}