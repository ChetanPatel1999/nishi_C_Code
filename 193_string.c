//strcpy() :- its copy one string in another string variable
#include <stdio.h>
#include <string.h>
void main()
{
    char ch1[20] = "Dev";
    char ch2[20] = "mayank";
    char ch3[20];
    printf("ch1 = %s\n", ch1);
    printf("ch2 = %s\n", ch2);

    // strcpy(ch2, ch1);
    strcpy(ch2, "home");

    printf("ch1 = %s\n", ch1);
    printf("ch2 = %s\n", ch2);

    strcpy(ch3, "yashi");
    printf("name = %s\n",ch3);
}