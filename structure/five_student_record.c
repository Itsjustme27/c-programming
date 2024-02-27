#include <stdio.h>
#include <conio.h>
struct student{
    int roll, age;
    char name[20], address[20];
}s[5];

int main() {
    int i;
    for(i = 0; i < 5; i++){
        printf("Enter the Roll Name: ");
        scanf("%d", &s[i].roll);
        printf("Enter the name: ");
        scanf("%s", s[i].name);
        printf("Enter the age: ");
        scanf("%d", &s[i].age);
        printf("Enter the address: ");
        scanf("%s", s[i].address);
    }
    printf("The Data are:\n ");
    for(i = 0; i < 5; i++){
        printf("Roll No: %d\t Name:%s\t Age:%d\t Address:%s\n", s[i].roll, s[i].name, s[i].age, s[i].address);
    }

    getch();
}