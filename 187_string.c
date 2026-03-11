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
    int num;
    while (1)
    {
        printf("enter string : ");
        gets(s1); // hello
        printf("string = %s\n", s1);
        printf("length of string : %d\n", length(s1));
        printf("you want to cheak more name length press 1 : ");
        scanf("%d", &num);//6
        if (num != 1)
        {
            break;
        }
        getchar();
    }
}