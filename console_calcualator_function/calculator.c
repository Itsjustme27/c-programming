//console_calculator
#include <stdio.h>

void add(int x , int y);
void diff(int x, int y);
void multiply(int x, int y);
void division(int x, int y);

void main(){
    int x,y;
    char op;
    printf("Enter operator  (+,-,*,/): ");
    scanf("%c",&op);
    printf("\nEnter number A: ");
    scanf("%d", &x);
    printf("Enter number B: ");
    scanf("%d", &y);
    switch(op){
        case '+':
            add(x,y);
            break;
        case '-':
            diff(x,y);
            break;
        case '*':
            multiply(x,y);
            break;
        case '/':
            division(x,y);
            break;
        default:
            printf("Syntax Error! Please enter a valid operator");
            break;
    }
}

void add(int x, int y){
    int sum = x + y;
    printf("The sum is %d", sum);
}

void diff( int x, int y){
    int sub = x - y;
    printf("The difference is : %d\n", sub);
}

void  multiply(int x, int y) {
    int mul = x * y;
    printf("The multiplication is : %d", mul);
}

void division(int  x , int y ) {
    int div = x / y;
    printf("The division is : %d", div);
}

