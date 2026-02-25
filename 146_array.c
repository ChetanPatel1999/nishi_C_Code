//  Write a program to print squares of all numbers present in a given array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n); // 9
    int arr[n];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++) // 2
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are :- \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray element square are :- \n");
    // 3,6,7,8,9
    for (i = 0; i < n; i++) // 2
    {
        printf("%d ", arr[i] * arr[i]);
    }
}