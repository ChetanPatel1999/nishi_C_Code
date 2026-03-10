//wap to count vovel and consonent in string
#include <stdio.h>
void main()
{
    char s[] = "hello students567";
    int i;
    printf("string = %s\n", s);
    int vovleCount = 0, consonetCount = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vovleCount++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            consonetCount++;
        }
    }
    printf("total vovel count = %d\n", vovleCount);
    printf("total consonet count = %d\n", consonetCount);
}