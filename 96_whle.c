#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d  ", i);
        i++;
    }
}