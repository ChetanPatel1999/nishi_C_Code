// Write a program to display all even numbers present in an array.
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

    printf("\narray even element are :- \n");
    //34,6,7,8,9
    for (i = 0; i < n; i++)//2
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}