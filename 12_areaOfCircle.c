// wap to print area of circle.
#include <stdio.h>
void main()
{
    float radius, area;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    printf("area of circle = %.2f", area);
}