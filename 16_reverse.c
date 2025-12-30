// . Write a program to print any three digit number in reverse order..
#include <stdio.h>
void main()
{
    int r, s, t, number, rev;
    printf("enter a num : ");
    scanf("%d", &number); // 23
    r = num / 100;
    s = (num % 100) / 10;
    t = num % 10;
    rev = r + s*10 + t*100;
    printf("reverse number = %d", rev);
}