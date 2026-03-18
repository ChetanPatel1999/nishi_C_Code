// write data in file
#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\PC\\Desktop\\mayank\\abc.txt", "w");
    fprintf(ptr, "hello i am chetan");
    fclose(ptr);
}