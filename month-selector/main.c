//WAP to input a number (1-12) then display name of Month

#include <stdio.h>

void main() {
    int day;
    printf("Enter a number (1-12) to select (January to December): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    
    default:
        printf("Invalid input!Please try again");
        break;
    }
}
