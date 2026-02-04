// . Write a program to find the sum of the series [1 +11 + 111 + 1111 + .. n ]
// terms.
// 1  11   111   1111   11111  111111
#include <stdio.h>
void main()
{
    int n;
    int res = 1, b = 10, i, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", res); // 1  11 111 1111  11111
        sum = sum + res;
        res = res + b; // 111111
        b = b * 10;    // 1000000
    }
    printf("\n total series sum = %d",sum);
}