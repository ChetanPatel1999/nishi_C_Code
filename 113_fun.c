#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("this is addition app : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void subtraction()
{
    int a, b, c;
    printf("this is subtraction app : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a - b;
    printf("subtraction = %d\n", c);
}
void main()
{
    printf("main fun is start ....\n");
    addition();
    printf("again main function\n");
    addition();
}