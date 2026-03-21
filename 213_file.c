// fputc() :- write one char in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch='P';
    ptr = fopen("cube.txt", "a");
    fputc(65, ptr);
    fputc('B', ptr);
    fputc(ch, ptr);
    fclose(ptr);
}
