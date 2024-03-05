#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, *ptr;
    printf("Enter the number for elements of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");
    for(i = 0;i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = &arr;

    printf("The elements of array are : ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *ptr);
        ptr++;
    }
    getch();

}