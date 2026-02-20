// example of recursion
//its run infinite times
#include <stdio.h>
void fun()
{
    printf("hello students\n");
    fun(); // recursive calling
}
void main()
{
    fun();
}