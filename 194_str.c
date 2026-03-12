// strcat() :-its  combine two string.
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[20] = "Dev";
    char ch2[20] = "sahu";
    strcat(ch1, " "); // "Dev "
    strcat(ch1, ch2);//"Dev sahu"
    printf("name = %s", ch1);
}