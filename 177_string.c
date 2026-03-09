#include <stdio.h>
void main()
{
    char city[] = "indore";
    int i;
    for (i = 0; city[i]!='\0'; i++)//6
    {
        printf("%c ", city[i]);
    }
}