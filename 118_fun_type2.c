// no return type but with parameter
#include <stdio.h>
void cube(int num)
{
    int c;
    c = num * num * num;
    printf("cube of %d = %d \n", num, c);
}
void greatestNum(int a, int b)
{
    if (a > b)
    {
        printf("greatest num : %d\n", a);
    }
    else
    {
        printf("greatest num : %d\n", b);
    }
}

void factorial(int num)
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void main()
{
    factorial(5);
    cube(4);
    greatestNum(34, 67);
    greatestNum(344, 67);
}