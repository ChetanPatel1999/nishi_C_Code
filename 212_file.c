// fgetc() :- read one by one char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data;
    ptr = fopen("176_string.c", "r");

    while (1)
    {
        data = fgetc(ptr);
        if (data == -1)
        {
            break;
        }
        printf("%c", data);
    }
    fclose(ptr);
}