// fgets(): - its read line from file
// fputs():
#include <stdio.h>
void main()
{
    FILE *ptr = fopen("cube.txt", "r");
    char data[30];
    fgets(data, 30, ptr);
    printf("%s", data);
    
    fgets(data, 30, ptr);
    printf("%s", data);
    fclose(ptr);
}