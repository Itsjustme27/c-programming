#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter b: ");
    scanf("%d", &c);
    if (a>b){
        if(a>c){
            printf("Greater is %d", a);
        }else{
            printf("Greater is %c", c);
        }
    }else{
        if(b > c){
            printf("Greater is %d",b);
        }else{
            printf("Greater is %d",c);
        }
    }
    return 0;
}