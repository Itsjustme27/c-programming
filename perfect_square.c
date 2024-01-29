//WAP to input a number and check it is a perfect square.
#include <stdio.h>
#include <math.h>

void main() {
    int x;
    int sqroot;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x >= 0){
        sqroot = sqrt(x);
        if (sqroot * sqroot == x){
            printf("The number %d is a perfect square!\n**********\n Proof: Squareroot of %d is %d", x,x, sqroot);
        }else{
            printf("The number is not a perfect square");
        }
    }
}