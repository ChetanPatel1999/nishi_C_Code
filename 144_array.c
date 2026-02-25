// . Write a program to count how many even numbers are present in an array.
// 45,78,4,3,2,89
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

    int count = 0;
    // 4 ,5,6,7,2
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("\ntotal even number count : %d", count);
}