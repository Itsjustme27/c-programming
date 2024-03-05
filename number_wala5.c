#include <stdio.h>

void main()
{
    int i, a=1,b=1;
    for(i = 1; i <= 5;i++){
        printf("%d \n", b);
        a = (a*10)+1;
        b = a*a;
    }
}