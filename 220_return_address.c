// return address in C
#include <stdio.h>
int *hello(int *a)
{
    *a = *a + 7;
    return a;
}
void main()
{
    int n = 10;
    int *res = hello(&n);
    printf("%d\n", *res);
    printf("%d\n", n);
}