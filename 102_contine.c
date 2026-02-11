#include <stdio.h>
void main()
{
    int i = 0;
    while (i <= 20)
    {
        i++;
        if (i >= 6 && i < 12)
        {
            continue;
        }
        i++;
        printf("%d\n", i); // 2 4 6 13 15 17 19 21
    }
}