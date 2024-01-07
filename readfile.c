#include<stdio.h>

void main()
{
    char ch;
    FILE *fp;
    fp = fopen("ok.c", "r");
    while(1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
        break;
        printf("%c", ch);
    }
    fclose(fp);
}
