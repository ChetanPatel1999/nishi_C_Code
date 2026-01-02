// contant variable example
#include <stdio.h>
void main()
{
    const int a = 12;
    printf("value of a = %d\n", a);
    // a = 90; // constant valu can not changed
    printf("value of a = %d\n", a);
    int c;
    c = 3 + a;
    printf("value of c = %d\n", c);
}