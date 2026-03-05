#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr, i;
    ptr = &arr[0];
    printf("array element are : \n");
    for (i = 0; i < 5; i++)//1
    {
        printf("%d ", *ptr);//12 34
        ptr++;//408
    }
}