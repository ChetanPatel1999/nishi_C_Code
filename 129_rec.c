#include <stdio.h>
// int i = 1;
void main()
{
    static int i = 1;
    printf("hello students\n");
    i++;
    if (i <= 5)
    {
        main();
    }
}