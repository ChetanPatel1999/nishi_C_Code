#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1, n2;
    printf("enter dynamic array size : ");
    scanf("%d", &n1);
    int *ptr = (int *)malloc(n1 * sizeof(int));
    int *temp = ptr;
    printf("dynamic array address are :\n ");
    int i;
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    printf("\nenter incresing dynamic array size : ");
    scanf("%d", &n2); // 8
    ptr = temp;
    ptr = (int *)realloc(ptr, n2 * sizeof(int));
    temp = ptr;
    printf("new dynamic array address are :\n ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    free(ptr);
}