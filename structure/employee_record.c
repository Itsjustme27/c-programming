#include <stdio.h>
#include <conio.h>

struct employee {
    int emp_number;
    char name[20];
    float salary;
    long int telephone;
}em;
void main() {
    printf("Enter the employee number: ");
    scanf("%d", &em.emp_number);
    printf("Enter the employee name: ");
    scanf("%s", em.name);
    printf("Enter the salary: ");
    scanf("%f", &em.salary);
    printf("Enter the telephone number: ");
    scanf("%li", &em.telephone);
    // Displaying Employee Details
    printf("Employer Name: %d\t  Employer name : %s\t  Salary : %.1f\t  Telephone number : %li", em.emp_number,em.name, em.salary, em.telephone);
    getch();
}