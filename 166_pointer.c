#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;

    printf("*ptr = %d\n", *ptr);
    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);

    ptr++; // ptr=ptr+1

    printf("&a = %d\n", &a);
    printf("ptr = %d\n", ptr);
}