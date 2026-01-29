// Write a program to check given number is perfact or not.
#include <stdio.h>
void main()
{
    int num, sum = 0, i;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num * 2)
    {
        printf("num is perfact");
    }
    else
    {
        printf("num is not perfact");
    }
}