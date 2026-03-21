// fputs(): write data in file
#include <stdio.h>
void main()
{
    FILE *ptr = fopen("cube.txt", "a");
    char data[30] = "hello its new data";
    fputs(data, ptr);
    fclose(ptr);
}