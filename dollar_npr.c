#include <stdio.h>

int main(){
    float us, npr;
    printf("Enter amount in USD: ");
    scanf("%f", &us);
    npr = us * 133.47;
    printf("The amount in NPR is: %f", npr);
    return 0;
}

