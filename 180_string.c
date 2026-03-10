// wap to check given string is alphet string or not.
#include <stdio.h>
void main()
{
    char s[] = "indore";
    int isalphabetic = 1;
    printf("string = %s\n", s);
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'))
        {
            isalphabetic = 0;
            break;
        }
        
    }

    if (isalphabetic == 1)
    {
        printf("alphabetic string\n");
    }
    else
    {
        printf("not alphabetic string\n");
    }
}