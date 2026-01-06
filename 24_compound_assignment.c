#include <stdio.h>
void main()
{
    int a = 12, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a += b;
    // a -= b;
    // a += a;
    // b *= a;
    // a %= a;     // a= a%a;
    // a /= a;
    a += 20;
    printf("a = %d\n", a); // 0
    printf("b = %d\n", b); // 5
}