//  Write a program to takes a number as input and calculates how many digit its contain.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 67534
    while (num > 0)
    {

        res++; // 2

        num = num / 10; // 0
    }
    printf("total digit count in number : %d", res);
}