#include<stdio.h>
#include<conio.h>
int fib(int);
void main(){
    int i;
    printf("Fibonacci series: ");
    for(i=0;i<10;i++){
        printf("%d", fib(i));
    }
    getch();
}
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
