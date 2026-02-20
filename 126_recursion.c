// wap to print a 1 to 20  even numbers using recursion.
#include <stdio.h>
void evenNumber()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d ", i); // 2
    }
    i++; // 4
    if (i <= 20)
    {
        evenNumber();
    }
}
void main()
{
    evenNumber();
}