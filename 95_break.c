#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) // 2
    {
        if (i < 5)
        {
            printf("%d ", i);
        }
        else
        {
            break;
        }
        printf("%d ", i);
    }
}