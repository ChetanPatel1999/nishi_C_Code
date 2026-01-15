// Write a program to accept a number and check if it is positive , nagative or zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //-9
    if (num > 0)
    {
        printf("num is positive");
    }
    else if (num == 0)
    {
        printf("num is zero");
    }
    else
    {
        printf("num is nagative");
    }
}