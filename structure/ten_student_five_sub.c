#include <stdio.h>

struct student{
    int roll[2],eng[2], math[2], it[2], fc[2], pl[2];
    char name[20]; 
}s[2];

void main() {
    int i, total, per;
    for(i = 0; i < 2; i++){
        printf("Enter the roll number: ");
        scanf("%d", &s[i].roll[i]);
        printf("Enter the name: ");
        scanf("%s", s[i].name);
        printf("Enter the marks of English, Math, IT, FC, PL: ");
        scanf("%d %d %d %d %d", &s[i].eng[i], &s[i].math[i], &s[i].it[i], &s[i].fc[i], &s[i].pl[i]);
    }

    //calculating total and percentage
    for (i = 0; i < 2; i++){
        total = s[i].eng[i]+s[i].math[i]+s[i].it[i]+s[i].fc[i]+s[i].pl[i];
        per = total/5;
    }  

    for(i = 0; i < 2; i++){
        printf("Roll no. %d\n", s[i].roll[i]);
        printf("Name: %s\n", s[i].name[i]);
        printf("English:%d\t Math:%d\t IT:%d\t FC:%d\t PL: %d\t\n", s[i].eng[i], s[i].math[i], s[i].it[i], s[i].fc[i], s[i].pl[i]);
        printf("Total: %d\t", total);
        printf("Percentage: %d", per);
    } 
}