// continue in C
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++)//7
    {
        if (i == 5 || i == 7)
        {
            continue;
        }
        printf("%d\n", i);
    }
}