/*Wap to input five record of employee with employer number ,name, age and salary into structure then calculate tax amount with following criteria: 
if salary is less than 20000(tax = 1%), 20000 to 50000 (tax = 3%), more than 50000 (tax = 5%) then display the record.*/

#include <stdio.h>

struct employee {
    int emp_number, age;
    float salary, salary_after_tax, total_salary;
    char name[29];
    float tax, tax_rate;
}e[2];

void main() {
    int i;
    for(i = 0; i < 2; i++){
        printf("Enter employer number: ");
        scanf("%d", &e[i].emp_number);
        printf("Enter the name: ");
        scanf("%s", e[i].name);
        printf("Enter the age: ");
        scanf("%d", &e[i].age);
        printf("Enter the salary: ");
        scanf("%f", &e[i].salary);
    }

    for(i = 0; i < 2; i++){
        if(e[i].salary < 20000){
            e[i].tax_rate = 0.001;
            e[i].salary_after_tax = e[i].salary * e[i].tax_rate;
            e[i].total_salary = e[i].salary - e[i].salary_after_tax;
        }else if(e[i].salary > 20000 && e[i].salary < 50000){
            e[i].tax_rate = 0.003;
            e[i].salary_after_tax = e[i].salary * e[i].tax_rate;
            e[i].total_salary = e[i].salary - e[i].salary_after_tax;
        }else {
            e[i].tax_rate = 0.005;
            e[i].salary_after_tax = e[i].salary * e[i].tax_rate;
            e[i].total_salary = e[i].salary - e[i].salary_after_tax;
        }
    }

    for(i = 0; i < 2; i++){
        printf("Employer number: %d\t Name: %s\t Age: %d\t Salary:%f\t Total_salary: %f\t\n", e[i].emp_number, e[i].name, e[i].age, e[i].salary, e[i].total_salary);
    }
}

