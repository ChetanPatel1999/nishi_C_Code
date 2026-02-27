// find max value from array.
#include <stdio.h>
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int findMaxElement(int arr[], int n)
{
    int max, i;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
void getArrayElement(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void main()
{
    
    int arr1[5];
    int arr2[8];
    int arr3[3];
    printf("enter arr1 element : ");
    getArrayElement(arr1, 5);

    printf("\nenter arr2 element : ");
    getArrayElement(arr2, 8);

    printf("enter arr3 element : ");
    getArrayElement(arr3, 3);
    
    printf("array1 elements are : \n");
    display(arr1, 5);
    printf("\nmax element : %d\n", findMaxElement(arr1, 5));

    printf("array2 elements are : \n");
    display(arr2, 8);
    printf("\nmax element : %d\n", findMaxElement(arr2, 8));

    printf("array3 elements are : \n");
    display(arr3, 3);
    printf("\nmax element : %d\n", findMaxElement(arr3, 3));
}