// Wap to find greatest number among has given three numbers without
//  using (&&)  logical and operator.
#include <stdio.h>
void main()
{
    int n1, n2, n3;
    printf("enter n1 : ");
    scanf("%d", &n1);
    printf("enter n2 : ");
    scanf("%d", &n2);
    printf("enter n3 : ");
    scanf("%d", &n3);
    // 45 788 367
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("greatest num = %d", n1);
        }
        else
        {
            printf("greatest num = %d", n3);
        }
    }
    else
    {
        if (n2 > n3)
        {
            printf("greatest num = %d", n2);
        }
        else
        {
            printf("greatest num = %d", n3);
        }
    }
}