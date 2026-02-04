#include <stdio.h>
void main()
{
    int num;
    int digit;
    printf("enter a num : ");
    scanf("%d", &num);
    printf("enter a digit : ");
    scanf("%d", &digit);
    int flag = 0;
    int rem;
    while (num > 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            flag++;
        }
        num = num / 10;
    }
    if (flag > 0)
    {
        printf("digit count is %d", flag);
    }
    else
    {
        printf("num is not exist ");
    }
}