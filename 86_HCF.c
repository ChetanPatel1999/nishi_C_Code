//  Write a to find the HCF (Highest Common Factor) of two numbers.
#include <stdio.h>
void main()
{
    int n1, n2, min;
    printf("enter n1 : ");
    scanf("%d", &n1);
    printf("enter n2 : ");
    scanf("%d", &n2);
    min = n1 < n2 ? n1 : n2;
    // 7 9
    while (min > 0)
    {
        if (n1 % min == 0 && n2 % min == 0)
        {
            printf("HCF = %d", min);
            break;
        }
        min--; // 6
    }
}