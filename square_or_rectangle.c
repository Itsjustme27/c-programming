//WAP to input side length of figure and check if it's square or rectangle.
#include <stdio.h>

void main(){
    int s1, s2, s3, s4;
    printf("Enter the side length: ");
    scanf("%d %d %d %d", &s1,&s2,&s3,&s4);
    if(s1 == s2 && s2 == s3 && s3 == s4) {
        printf("The figure is a square");
    }else if(s1 == s3 &&  s2 == s4){
        printf("The figure is a reactangle");
    }else{
        printf("The figure is neither a square nor a rectangle");
    }
}