// wap to print  1 to n  even number  using recursion.
#include <stdio.h>
void number(int num)
{

    if (num > 1)
    {
        number(num - 1);
    }
    if (num % 2 == 0)
    {
        printf("%d ", num);
    }
}
void main()
{
    number(10);
}