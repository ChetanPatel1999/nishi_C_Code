#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *ptr, i, n;
    printf("enter dynamic array size : ");
    scanf("%d", &n); // 5
    ptr = (int *)malloc(n * sizeof(int));
    printf("enter dynamic array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("dynamic array element are : \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", *(ptr + i));
    }

    int sum = 0;
    for (i = 0; i < n; i++) // 1
    {
        sum = sum + *(ptr + i);
    }
    printf("\nsum of all array element = %d", sum);
    free(ptr);
}