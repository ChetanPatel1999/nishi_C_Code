#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 10)
    {
        i++; 
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }
}