/*area of circle*/
#include <stdio.h>

//datatype & function name
float area(float r);
            //formal parameter
int main(){
    float a, r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    a = area(r); //function call (actual parameter)
    printf("The area is : %f", a);
    return 0;
}

float area(float r){
    float c;
    c = 3.14*r*r;
    return c;
}