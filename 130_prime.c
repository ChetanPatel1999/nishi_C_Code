#include <stdio.h>
int prime(int num)
{
    int i, c = 0;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    // int res = prime(18);
    // if (res == 1)
    // {
    //     printf("num is prime");
    // }
    // else
    // {
    //     printf("num is not prime");
    // }
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (prime(i))
        {
            printf("%d ", i);
        }
    }
}