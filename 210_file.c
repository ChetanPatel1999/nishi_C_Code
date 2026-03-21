// fscanf():-its used to read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data[30];
    ptr = fopen("cube.txt", "r");
    int stop;
    int c = 0;
    while (1)
    {
        stop = fscanf(ptr, "%s", data);
        if (stop == EOF)
        {
            break;
        }
        if (strcmp(data, "cube") == 0)
        {
            c++;
            printf("\n");
        }
        printf("%s ", data);
    }
    printf("\ntotal cube word count in file = %d", c);
    fclose(ptr);
}