//  Write a program that takes a number as input and checks whether it is a
// palindrome or not. (A number is a palindrome if it reads the same forward
// and backward.)
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 454
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        res = res * 10 + rem; // 454
        num = num / 10;
    }
    if (res == temp)
    {
        printf("num is plindrom");
    }
    else
    {
        printf("num is not plindrom");
    }
}