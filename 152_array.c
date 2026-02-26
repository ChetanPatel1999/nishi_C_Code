// . Write a program that accepts some integers from the user and finds the highest value and the input  position.
#include <stdio.h>
void main()
{
    int arr[5] = {4, 6, 36, 7, 88};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // find max element from array
    // 4, 6, 36, 7, 8
    int max = arr[0];
    int index = 0;
    for (i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    printf("\nmax element is : %d", max);
    printf("\nelement position is : %d", index + 1);
}