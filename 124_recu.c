// wap to print a msg 5 times using recursion.
#include <stdio.h>
void fun()
{
    static int i = 1; // its run once time in program
    printf("hello students\n");
    i++;//2
    if (i <= 5)
    {
        fun();
    }
    
}
void main()
{
    fun();
}