// fgets() :- its take  string input from user
// fputs() :- its display string on output screen
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    fgets(name,50,stdin);
    printf("string = ");
    fputs(name,stdout);
}