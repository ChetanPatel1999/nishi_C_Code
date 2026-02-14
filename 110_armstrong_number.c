#include <stdio.h>
void main()
{
    int num = 4567;
    int temp = num, rem, res, i, sum = 0;
    int c = 0;
    while (num > 0)
    {
        c++;
        num = num / 10;
    }
    num = temp;
    while (num > 0) // 153
    {
        rem = num % 10;
        res = 1;
        for (i = 1; i <= c; i++)
        {
            res = res * rem;
        }
        sum = sum + res;
        num = num / 10;
    }

    if (sum == temp)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}