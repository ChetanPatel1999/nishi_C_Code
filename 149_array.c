//  Write a program to copy squares of one array element in another array.
#include <stdio.h>
void main()
{
    int arr[5] = {2, 3, 6, 8, 9};
    int copyArr[5], i;

    for (i = 0; i < 5; i++)
    {
        copyArr[i] = arr[i]+5;
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