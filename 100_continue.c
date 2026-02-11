//wap to print odd number using continue stmnt.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) //3
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n", i);//1 
    }
}