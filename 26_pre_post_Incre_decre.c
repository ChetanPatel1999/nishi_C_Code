#include <stdio.h>
void main()
{
    int a = 12, b;
    b = ++a; // pre-increament :- first a value increased by 1 then update value assign in b
    // b = a++;  //post increament :-  first a value assign in b after then a value increase by 1
    printf("a= %d\n", a); // 13
    printf("b= %d\n", b); // 13
}