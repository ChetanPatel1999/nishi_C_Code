// Write a program to display factors of given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 15
    printf("factors of %d = ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i); // 1 3 5 15
        }
    }
}