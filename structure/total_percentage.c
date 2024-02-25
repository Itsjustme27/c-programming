//WAP to input 5 different subject marks, roll and name of student into structure then calculate total and percentage.
#include <stdio.h>

struct student {
    int marks[5], roll;
    char name[20];
}s;

int main() {
    int i, total=0, per;
    printf("Enter the marks: ");
    for( i= 0; i <5; i++)
        scanf("%d", &s.marks[i]);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    //Total
    for(i = 0; i < 5; i++){
        total = total + s.marks[i];
    }
    printf("The total is : %d", total);
    //percentage
    per = total / 5;
    printf("\nThe percentage is %d", per);
    return 0;
}