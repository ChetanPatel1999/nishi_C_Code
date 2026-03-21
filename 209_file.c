// fscanf():-its used to read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[30];
    ptr = fopen("cube.txt", "r");
    fscanf(ptr, "%s", data);
    printf("%s ", data);

    fscanf(ptr, "%s", data);
    printf("%s ", data);

    fscanf(ptr, "%s", data);
    printf("%s ", data);
    fclose(ptr);
}