// Write a program to takes a number as input and calculates how many even digit contains.
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 675
    while (num > 0)
    {
        rem = num % 10;
        res = res * 10 + rem;//576
        num = num / 10;
    }
    printf("reverse number : %d", res);
}