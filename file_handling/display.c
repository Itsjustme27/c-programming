#include <stdio.h>
#include <ctype.h>

void main() {
    FILE *fp;
    int roll, age;
    char name[20];
    fp = fopen("record.txt", "r");
    printf("The data are:\n ");
    fscanf(fp, "%d %s %d", &roll, name, &age);
    printf("%d %s %d", roll, name,age);
    fclose(fp);
}