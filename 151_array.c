// Write a program to find the maximum element in an array.
#include <stdio.h>
void main()
{
    int arr[5] = {4, 6, 36, 7, 8};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // find max element from array
    //444, 66, 36, 7, 888
    int max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nmax element are : %d", max);
}
