// wap to pint 1 to even number.
#include <stdio.h>
void main()
{
    int i;
    i = 1;
start:
    if (i % 2 == 0)
    {
        printf("%d  \n", i);
        // getch(); 
    }
    i++;
    if (i <= 10)
    {
        goto start;
    }
}