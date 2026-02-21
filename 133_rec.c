// wap to print a msg 5 times using recursion.
#include <stdio.h>
void number(int num)
{
    if (num > 1)
    {
        number(num - 1);
    }
    printf("hello world institue\n");
}
void main()
{
    number(5);
}