// how to take string from user
#include <stdio.h>
void main()
{
    char name[5];
    printf("enter string : ");
    scanf("%[^\n]s", name);
    printf("string = %s\n", name);
}