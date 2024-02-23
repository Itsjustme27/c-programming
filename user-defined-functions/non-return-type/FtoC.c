//fahrenheit to celsius

#include <stdio.h>

void fahrenheit_to_celsius(float f);

int main() {
    float f;
    printf("Enter the fahrenheit: ");
    scanf("%f", &f);
    fahrenheit_to_celsius(f);
    return 0;
}

void fahrenheit_to_celsius(float f){
    float c;
    c = (f-32) * 5/9;
    printf("%f degree  Fahrenheit is equal to %f degrees Celsius.\n", f, c);
}