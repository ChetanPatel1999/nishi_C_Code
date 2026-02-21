// wap to print  1 to n number  using recursion.
#include <stdio.h>
void number(int num)
{
    if (num > 1)
    {
        number(num - 1);
    }
    printf("%d ", num);
}
void main()
{
    number(10);
}