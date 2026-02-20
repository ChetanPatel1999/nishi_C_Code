// wap to print a 1 to given number sum  using recursion.
#include <stdio.h>
int sumNumber(int num)
{
    static int i = 1, sum = 0;
    sum = sum + i; // 10
    i++;           // 3
    if (i <= num)
    {
        sumNumber(num);
    }
    return sum;
}
void main()
{
    printf("sum = %d", sumNumber(20));
}