// strupr() = its convert string in upper case
// strlwr() = its convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char ch[] = "MayANk";
    printf("string = %s\n", ch);
    // strupr(ch);
    strlwr(ch);
    printf("string upper = %s\n", ch);
}