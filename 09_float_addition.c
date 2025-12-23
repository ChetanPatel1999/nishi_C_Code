// write a program to add two float numbers.
#include <stdio.h>
void main()
{
    float a, b, c;
    printf("enter first num : ");
    scanf("%f", &a);
    printf("enter second num : ");
    scanf("%f", &b);
    c = a + b;
    printf("addotion = %.1f", c);
}