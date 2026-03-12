// strcmp() :-its  compare two string if string are same is return 0 otherwise return 1.
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[20] = "devv";
    char ch2[20] = "Dev";
    // if (strcmp(ch1,ch2)==0)
    if (strcmpi(ch1,ch2)==0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}