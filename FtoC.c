//WAP to convert fahrenheit to celsius.
#include<stdio.h>

int main(){
    float f,c;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("\nTemperature in Celsius is %0.1f ",c);
    return 0;
}
