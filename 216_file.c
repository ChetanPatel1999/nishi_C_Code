// fgetc() :- read one by one char from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char data;
    ptr = fopen("cube.txt", "r");
    printf("pointer pos : %d\n", ftell(ptr));
    fseek(ptr, 5, SEEK_SET); // its set pointer location inside file
    printf("pointer pos : %d\n", ftell(ptr));
    while (1)
    {
        data = fgetc(ptr);
        if (data == -1)
        {
            break;
        }
        printf("%c", data);
    }
    printf("pointer pos : %d\n", ftell(ptr));
    rewind(ptr); // its set pointer location at begining of the file
    printf("pointer pos : %d\n", ftell(ptr));
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