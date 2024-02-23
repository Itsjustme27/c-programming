//sum of nth number (non-return type)

#include <stdio.h>

void sum(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sum(n);
    return 0;
}
//Function to calculate the sum of nth number
void sum(int n){
    int i, s = 0;
    for(i = 0; i <= n; i++){
        s = s + i;
    }
    printf("The sum of  %d is %d.", n, s);
}