#include <stdio.h>
void main()
{
    // char name[7] = {'c', 'h', 'e', 't', 'a', 'n', '\0'};

    char name[7] = "chetan";

    printf("name = %s\n", name);

    printf("%c\n", name[0]); // c
    printf("%c\n", name[1]); // h
    printf("%c\n", name[2]);//  e

    name[0] = 'j';
    
    printf("name = %s\n", name);
}