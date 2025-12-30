// Write a program to swap any two numbers without using third variable.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter a  : ");
    scanf("%d", &a);
    printf("enter b  : ");
    scanf("%d", &b);
    printf("before swaping values : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swaping values : \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}