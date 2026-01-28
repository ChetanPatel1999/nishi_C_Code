// Write a program to display average 1 to n ( given number).
#include <stdio.h>
void main()
{
    int n, sum = 0, i;
    printf("enter a num : ");
    scanf("%d", &n);         // 10
    for (i = 1; i <= n; i++) // 11
    {
        sum = sum + i; // 55
    }

    printf("sum of 1 to %d = %d\n", n, sum);
    printf("average of 1 to %d = %.2f ", n, sum / (float)n);
}