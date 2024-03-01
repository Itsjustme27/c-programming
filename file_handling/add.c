#include <stdio.h>
#include <ctype.h>

void main() {
    int roll[5], age[5], i;
    char name[20];
    FILE *fp;
    fp = fopen("record.txt", "a");
    printf("Enter the roll number, age and name:\n ");
    for(i = 0; i < 5; i++){
        scanf("%d", &roll[i]);
        scanf("%d", &age[i]);
        scanf("%s", name);
    }
    for(i = 0; i < 5; i++){
        fprintf(fp, "\n%d\t %d\t %s\t", roll, age, name);
    }
    fclose(fp);
}