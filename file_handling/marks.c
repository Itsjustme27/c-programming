#include <stdio.h>
#include <ctype.h>

void main() {
    FILE *fp;
    char name;
    int roll, pl, fc, math, english, it;
    fp = fopen("result.txt", "w");
    printf("Enter roll: ");
    scanf("%d", &roll);
    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter marks of PL, FC, IT, Math, English: ");
    scanf("%d ", &pl);
    scanf("%d", &fc);
    scanf(" %d", &it);
    scanf("%d", &math);
    scanf("%d", &english);
    fprintf(fp, "Roll: %d\t name: %s\n  marks of PL, FC, IT, Math, English: %d\t %d\t %d\t %d\t %d", roll, name, pl, fc, it, math, english);
    fclose(fp);
}