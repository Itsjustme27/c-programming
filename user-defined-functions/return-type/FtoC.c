//fahrenheit to celsius 

#include <stdio.h>

float  fahrenheit_to_celsius(float f);

int main(){
    float f;
    printf("Enter the fahrenheit: ");
    scanf("%f", &f);
    printf("%f degree fahrenheit is %f degree celsius", f, fahrenheit_to_celsius(f));
    return 0;
}

float fahrenheit_to_celsius(float f){
    float celsius;
    celsius = (f-32)*5/9;
    return celsius;
}