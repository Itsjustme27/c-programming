#include <stdio.h>
#include <ctype.h>

void main() {
    int roll[5], age[5], i;
    char name[20];
    FILE *fp;
    fp = fopen("record.txt", "a");
    printf("Enter the roll number, age and name:\n ");
    for(i = 0; i < 5; i++){
        scanf("%d %d %s", &roll[i], &age[i], name[i]);
    }
    for(i = 0; i < 5; i++){
        fprintf(fp, "%d %d %s", roll[i], age[i], name[i]);
    }
    fclose(fp);
}