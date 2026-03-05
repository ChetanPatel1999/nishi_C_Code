#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr; //pointer type variable
    ptr = &a;
    printf("a = %d\n", a);
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
    printf("&ptr = %d\n", &ptr);
    printf("*ptr = %d\n", *ptr);
}