#include <stdio.h>
void main()
{
    int i = 8;
    printf("hello world institute \n");
    if (i == 5)
    {
        goto start;
    }
    printf("stmnt 1\n");
    printf("stmnt 2\n");
    printf("stmnt 3\n");
start: 
    printf("after lable");
}