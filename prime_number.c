#include <stdio.h>

int main() {
    int i,a;
    printf("The prime numbers between 1 and 100 are:\n");
    for (i = 1; i < 100; i++){
        a=2;
        while(a <= i/2) {
            if (i % a == 0){
                break;
            }
            a++;
        }
        if (a > i/2) {
            printf("%d\t",i);
        }
    }
    return 0;
}