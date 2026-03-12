//strrev() = its convert string in reverse order
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[] = "mayank";
    printf("string = %s\n", ch);
    strrev(ch);
    printf("string reverse = %s\n", ch);
}