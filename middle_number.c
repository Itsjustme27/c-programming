//WAP to print 3 different number and print the middle number.
#include <stdio.h>

void main() {
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1,&num2,&num3);
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)){ 
        printf("The middle number is %d", num1); 
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)){ 
        printf("The middle number is %d", num2);
    }
    else{
        printf("The middle number is %d", num3);
    }
}