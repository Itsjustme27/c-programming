#include<stdio.h>

int main(){
    char op;
    float num1, num2, result;
    printf("******Console Calculator******\n");
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);
    //taking input num1 and num2
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);
    //checking operator signs

    switch (op)
    {
    case '+' /* constant-expression */:
        result = num1 + num2;
        printf("Sum: %f\n", result);
    case '-':
        result = num1 - num2;
        printf("Difference: %f\n", result);
    case '*':
        result = num1 * num2;
        printf("Product: %f\n", result);
    case '/':
        result = num1 / num2;
        printf("Result: %f'\n", result);
    default:
        printf("Invalid");
        break;
    }
    return 0;
}