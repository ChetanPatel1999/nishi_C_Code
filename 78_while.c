//   Write a program to that takes a number as input and calculates the sum of 
// only its even digits. 
#include <stdio.h>
void main()
{
    int num, rem, res = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 45376
    while (num > 0)    // 4>0
    {
        rem = num % 10; // 4
        if (rem % 2 == 0)
        {
            res = res + rem; // 12
        }
        num = num / 10; // 0
    }
    printf("sum of individual digit : %d", res);
}