#include<stdio.h>

void main() {
    int x,y;
    printf("Enter the coordinate x: ");
    scanf("%d", &x);
    printf("Enter the coordinate y: ");
    scanf("%d", &y);
    if(x == 0 && y == 0){
        printf("It is center");
    }
    else if (x >= 0 && y >= 0){
        printf("It is first quadrant");
    }else if( x <= 0 && y >= 0){
        printf("It is second quadrant");
    } else if(x  <= 0 && y <= 0) {
        printf("It is third quadrant");
    }else{
        printf("It is fourth quadrant");
    }
}