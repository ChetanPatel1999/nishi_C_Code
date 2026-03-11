// wap to print length of given string.
#include <stdio.h>
int length(char s[])
{
    int c = 0, i;
    for (i = 0; s[i] != '\0'; i++) // 3
    {
        c++; // 3
    }
    return c;
}
void main()
{
    char s1[30];
    printf("enter string : ");
    gets(s1); // hello
    printf("string = %s\n", s1);

    printf("length of string : %d\n", length(s1));

    char s2[30];
    printf("enter string : ");
    gets(s2); // dev
    printf("string = %s\n", s2);
    printf("length of string : %d\n", length(s2));

    char s3[30];
    printf("enter string : ");
    gets(s3); // dev
    printf("string = %s\n", s3);
    printf("length of string : %d\n", length(s3));

    printf("this all students name : \n");
    printf("string = %s\n", s1);
    printf("string = %s\n", s2);
    printf("string = %s\n", s3);
}