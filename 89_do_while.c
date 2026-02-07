// wap to print 1 to 10 even numbers.
#include <stdio.h>
void main()
{
    int i = 1;
    do
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    } while (i <= 10);
}