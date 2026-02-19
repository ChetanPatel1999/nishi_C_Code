// with return type with parameter
#include <stdio.h>
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int cube(int num)
{
    return num * num * num;
}

int greatestNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    printf("addition = %d\n", addition(12, 50));
    printf("cube  = %d\n", cube(5));
    printf("grteatest  = %d\n", greatestNum(45, 67));
    printf("grteatest  = %d\n", greatestNum(455, 67));
    printf("factorial  = %d\n", factorial(5));
}