//WAP to convert seconds into hours, minutes and remaining second

#include<stdio.h>

int main(){
    int t, h, m, sec;
    printf("Enter the total time in seconds: ");
    scanf("%d", &t);
    h = (t / 3600);
    m = (t % 3600) / 60;
    sec = (t % 3600) % 60;
    printf("\n%d hour(s), 0%d minute(s) and %d second(s)", h, m, sec);
    return 0;
}