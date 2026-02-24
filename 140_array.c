#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int i;

    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", arr[i]);
    }

    arr[2] = 500;
    arr[4] = 600;

    printf("\narray element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", arr[i]);
    }
}