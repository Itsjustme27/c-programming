//WAP to read the number of girls and boys in your class and display the ratio of girls and boys.

#include <stdio.h>

int main() {
    int number_of_girls, number_of_boys;
    printf("Enter the number of girls: ");
    scanf("%d", &number_of_girls);
    printf("Enter the number of boys: ");
    scanf("%d", &number_of_boys);

    int commonFactor = 1;
    do{
        commonFactor++;
    }while((number_of_girls%commonFactor != 0) && (number_of_boys%commonFactor != 0));

    int girlsRatio = number_of_girls / commonFactor;
    int boysRatio = number_of_boys / commonFactor;

    printf("The ratio of girls and boys is %d : %d", girlsRatio, boysRatio);
    return 0;
}