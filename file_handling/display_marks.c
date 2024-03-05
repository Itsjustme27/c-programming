#include <stdio.h>
#include <ctype.h>

void main() {
    FILE *fp;
    char name;
    int roll, pl, fc, math, english, it;
    fp = fopen("result.txt", "r");
    fprintf(fp, "Roll: %d\t name: %s\n  marks of PL, FC, IT, Math, English: %d\t %d\t %d\t %d\t %d", roll, name, pl, fc, it, math, english);
    printf(" %d\t  %s\n  %d\t %d\t %d\t %d\t %d", roll, name, pl, fc, it, math, english);
    fclose(fp);
}