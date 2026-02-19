//with return type with parameter
#include <stdio.h>
float circleArea(float radius)
{
    float area;
    area = 3.141 * radius * radius;
    return area;
}
void main()
{
    float res = circleArea(4.3);
    printf("area = %.2f\n", res);
    if (res > 100)
    {
        printf("area is greter then 100\n");
    }
    else
    {
        printf("area is less then 100\n");
    }

    printf("area = %.2f", circleArea(5.6));
}