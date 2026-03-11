// wap to print length of given string.
#include <stdio.h>
void main()
{
    char s[30];
    printf("enter string : ");
    gets(s); // hii 
    printf("string = %s\n", s);
    int c = 0, i;
    for (i = 0; s[i] != '\0'; i++) // 3
    {
        c++;//3
    }
    printf("length of string : %d", c);
}