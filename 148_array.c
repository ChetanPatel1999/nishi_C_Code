//  Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int copyArr[5], i;

    // copy one array element into another array
    for (i = 0; i < 5; i++)
    {
        copyArr[i] = arr[i];
    }

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\ncopy array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", copyArr[i]);
    }
}