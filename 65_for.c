// Write a program to display table of given number.
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) // 2
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}