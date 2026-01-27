// Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending number : ");
    scanf("%d", &n); // 20
    for (i = 1; i <= n; i++)//3
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}