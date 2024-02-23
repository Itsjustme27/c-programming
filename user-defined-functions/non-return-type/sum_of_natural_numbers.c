//natural numbers

#include <stdio.h>

void sum(int n);

int main() {
    int n;
    sum(n);
    return 0;
}

void sum(int n){
    int add = 0,i;
    for(i = 1; i <= 10; i++){
        add = add + i;
    }
    printf("The sum is: %d", add);
}