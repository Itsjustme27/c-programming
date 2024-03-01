#include <stdio.h>
#include <ctype.h>

void main() {
    int roll, age;
    char name[20];
    FILE *fp; //used to point the file inside secondary memory
    fp = fopen("record.txt", "w"); //used to create a new file
    printf("Enter the roll number: ");
    scanf("%d", &roll);
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(fp, "%d %s %d",  roll, name, age);//write data into the file
    fclose(fp);
}