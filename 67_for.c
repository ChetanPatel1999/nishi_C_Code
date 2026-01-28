// Write a program to display factors count of given number.
#include <stdio.h>
void main()
{
    int i, n, c = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;//4
        }
    }
    printf("total factors count = %d", c);
}