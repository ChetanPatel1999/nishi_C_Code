// wap to find greatest number between two number.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter num1 : ");
    scanf("%d", &num1);// 89
    printf("enter num2 : ");
    scanf("%d", &num2);// 556
    num1 > num2 ? printf("greatest num = %d", num1) : printf("greatest num = %d", num2);
}