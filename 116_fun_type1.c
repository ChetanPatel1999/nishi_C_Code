// no return type , no parameter
#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("this is addition app : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void cube()
{
    int num, c;
    printf("enter a num : ");
    scanf("%d", &num);
    c = num * num * num;
    printf("cube of %d = %d \n", num, c);
}
void greatestNum()
{
    int a, b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greatest num : %d\n", a);
    }
    else
    {
        printf("greatest num : %d\n", b);
    }
}

void factorial()
{
    int fact = 1, num, i;
    printf("enter a num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d\n", num, fact);
}
void main()
{
    factorial();
    cube();
    greatestNum();
    // int i;
    // for (i = 1; i <= 5; i++)//3
    // {
    //     addition();
    // }
}