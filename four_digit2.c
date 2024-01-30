#include <stdio.h>

void main()
{
    int num, sum, a, b, c, d; // declare variables for number, sum, and digits
    printf("Enter a four digit number: "); // prompt the user for input
    scanf("%d", &num); // read the input as an integer
    a = num / 1000; // get the first digit by dividing by 1000
    b = (num % 1000) / 100; // get the second digit by modulo 1000 and dividing by 100
    c = (num % 100) / 10; // get the third digit by modulo 100 and dividing by 10
    d = num % 10; // get the fourth digit by modulo 10
    sum = a + b + c + d; // calculate the sum of the digits
    printf("The sum of the digits is: %d\n", sum); // print the sum
}
