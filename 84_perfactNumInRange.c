// Write a program to check given number is perfact or not.
#include <stdio.h>
void main()
{
    int num, sum, i, s, e;
    printf("enter starting range : ");
    scanf("%d", &s);
    printf("enter ending range : ");
    scanf("%d", &e);
    for (num = s; num <= e; num++) // 7
    {
        sum = 0;
        for (i = 1; i <= num; i++) // 1
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num * 2)
        {
            printf("%d ", num);
        }
    }
}