// factorial program
#include <stdio.h>
// int factorial(int num)
// {
//     int i, fact = 1;
//     for (i = 1; i <= num; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int factorial(int num)
// {
//     static int i = 1, fact = 1;
//     fact = fact * i;
//     i++;
//     if (i <= num)
//     {
//         factorial(num);
//     }
//     return fact;
// }

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
void main()
{
    printf("res = %d", factorial(5));
}