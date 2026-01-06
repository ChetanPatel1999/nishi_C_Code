#include <stdio.h>
void main()
{
    int age = 12;
    printf("age = %d\n", age);
    age++; // 13
    age++; // 14
    ++age; // 15

    age--; // 14
    --age; // 13
    printf("age = %d\n", age);
}