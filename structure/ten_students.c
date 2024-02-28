#include <stdio.h>

struct student{
    int roll, marks[5];
    char name[60];
}s[2];

int main() {
    int i,j, total, per;
    for(i = 0; i < 2; i++){
        printf("Enter the roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter the name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks of English, Math, IT, FC, PL: ");
        for(j = 0; j < 5; j++){
            scanf("%d", &s[i].marks[j]);
        }
    }

    // calculating total and percentage of each
    for(i = 0; i < 2; i++) {
        total = 0;
        for(j = 0; j < 5; j++){
        total += s[i].marks[j];
    }
        per = total / 5;
    }
    //Displaying result
    for(i = 0; i < 2; i++){
        printf("\n\nRoll: %d\t Name: %s\t Total Marks: %d\t Percentage: %d\n",  s[i].roll, s[i].name, total, per);
        printf("English\t Math\t IT\t FC\t PL\n");
        for(j = 0; j < 5; j++){
            printf("%d\t", s[i].marks[j]);
        }
    }
    return 0;
}