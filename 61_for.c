//  Write a program to display number 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending number : ");
    scanf("%d", &n); // 8
    for (i = 1; i <= n; i++)
    {

        printf("square of %d = %d\n", i, i * i);
    }
}