//  Write a program to array element in reverse order.
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
    // 34 56 22 77 88
    printf("\nreverse array element are :- \n");
    for (i = n - 1; i >= 0; i--)//2
    {
        printf("%d ", arr[i]);
    }
}