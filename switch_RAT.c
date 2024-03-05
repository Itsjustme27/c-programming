#include <stdio.h>


void main() {
    int p,b,h, p_square, b_square, h_square;
    printf("Enter perpendicular: ");
    scanf("%d", &p);
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter hypotenuse: ");
    scanf("%d", &h);
    p_square = p * p;
    b_square = b * b;
    h_square = h * h;
    if(h_square > p_square && h_square > b_square){
        printf("The  triangle is a right angled triangle.\n");
    }else{
        printf("The entered side lengths do not form a triangle\n");
    }

}