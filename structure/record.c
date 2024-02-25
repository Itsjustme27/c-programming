//WAP to store record of students with roll, name ,age and address into structure.

#include <stdio.h>

struct student {
    int age, roll;
    char address[10], name[10];
}s;

int main(){
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter address: ");
    scanf("%s", s.address);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("\nThe roll number is: %d\n The name is: %s\n The address is: %s\n The age is: %d\n", s.roll, s.name, s.address, s.age);
    return 0;
}