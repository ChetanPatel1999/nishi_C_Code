// append data in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\PC\\Desktop\\mayank\\abc.txt", "a");
    fprintf(ptr, "hello i am chetan\n");
    fclose(ptr);
}