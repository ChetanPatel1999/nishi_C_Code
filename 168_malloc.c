#include <stdio.h>
#include <stdlib.h>
void main()
{

    int *ptr, *temp, i, n;
    printf("enter dynamic array size : ");
    scanf("%d", &n); // 5
    ptr = (int*) malloc(n * sizeof(int));
    temp = ptr;
    printf("enter dynamic array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++; // 420
    }
    ptr = temp;
    printf("dynamic array element are : \n");
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", *ptr); // 12 34
        ptr++;               // 408
    }
    
    ptr = temp;
    int sum = 0;
    for (i = 0; i < n; i++) // 1
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nsum of all array element = %d", sum);
    ptr = temp;
    free(ptr);
}