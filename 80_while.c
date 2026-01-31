//  Write a program to takes a number as input and calculates how many even digit contains.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 67534
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            res++; // 2
        }
        num = num / 10; // 0
    }
    printf("total even digit count in number : %d", res);
}