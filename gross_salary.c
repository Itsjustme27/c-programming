//WAP to calculate the gross salary of the employee
#include <stdio.h>

int main(){
    int basic = 15000;
    int gross, ssf = 0.31 * basic, allowance = 0.40 * basic;
    gross = basic + ssf + allowance;
    printf("Gross Salary: %d\n",gross);
    return 0;
}