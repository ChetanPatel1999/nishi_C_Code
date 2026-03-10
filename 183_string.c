// gets() :- its take  string input from user
// puts() :- its display string on output scrren
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name);
    // printf("string = %s\n", name);
    printf("string = ");
    puts(name);
}