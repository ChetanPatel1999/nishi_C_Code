#include <stdio.h>
void main()
{
    int num = 3;
    int temp = num, rem, fact, i, sum = 0;

    while (num > 0) // 145
    {
        rem = num % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }

    if (sum == temp)
    {
        printf("strong number");
    }
    else
    {
        printf("not strong number");
    }
}