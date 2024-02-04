// WAP to input single no(1-3) then display 1. Area of circle 2. Perimeter of circle 3. Exit program
#include <stdio.h>
#define pi 3.1416

void main()
{
    int choice;
    float radius, area, perimeter;
    printf("'----------------Circle----------------");
    printf("\n\tEnter your choice: \n1.Area of Circle.\n2.Perimeter of Circle.\n3.Exit Program.");
    printf("\nChoose: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter the value of radius : ");
        scanf("%f", &radius);
        area = pi * radius * radius;
        printf("\nThe area of the circle is: %f", area);
        break;
    case 2:
        printf("\nEnter the value of radius: ");
        scanf("%f", &radius);
        perimeter = 2 * pi * radius;
        printf("\nThe perimeter of the circle is: %f", perimeter);
        break;
    case 3:
        return;
    default:
        printf("Invalid Input! Try again!!");
        break;
    }
}