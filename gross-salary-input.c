//WAP to calculate the gross salary of an employee. Input the basic salary from user, ssf is 31% of basic salary & allowance 60% of Basic salary.
#include<stdio.h>

int main(){
    float basic , gross;
    printf("Enter basic salary of employee: ");
    scanf("%f", &basic);
    float ssf = (31/100.0) * basic, allowance = (60/100.0) * basic;
    gross = basic + ssf + allowance;
    printf("The gross salary of employee is: %f", gross);
    return 0;
}