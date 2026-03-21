// fgetc() :- read one by one char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data;
    ptr = fopen("cube.txt", "r");
    data = fgetc(ptr);
    printf("%c", data);

    data = fgetc(ptr);
    printf("%c", data);
    fclose(ptr);
}