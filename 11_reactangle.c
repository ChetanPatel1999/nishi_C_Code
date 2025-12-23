// wap to print area of reactangle.
#include <stdio.h>
void main()
{
    float width, length, area;
    printf("enter width : ");
    scanf("%f", &width);
    printf("enter length : ");
    scanf("%f", &length);
    area = length * width;
    printf("area of reactangle = %.2f",area);
}