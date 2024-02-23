//sum of nth number:

#include <stdio.h>

int sum(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of nth number is: %d", sum(num));
    return 0;
}

int sum(int num){
    int s,b;
    for(b = 1; b <= num; b++){

        s = s + b;
    }
    return s;
}