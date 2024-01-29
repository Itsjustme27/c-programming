#include <stdio.h>

void main() {
    for (int i = 1; i <= 5; i++){
        printf("Initiating loop: %d\n", i);
        if (i == 2){
            printf("Break statement in: %d\n", i);
            break;
            printf("Hello there");
        }
    }

    for(int j = 0; j <= 5; j++){
        printf("Initiating loop: %d\n", j);
            if (j == 2){
            printf("continue statement\n");
            continue;
            printf("HELLO THERE");
        }
    }
    printf("Illustration of Break or Continue Statement");
}