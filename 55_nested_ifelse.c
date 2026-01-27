#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'a'||ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                printf("character is alphabet and is vowel");
            }
        else
        {
            printf("character is alphabet and but consonant");
        }
    }
    else
    {
        printf("character is not a alphabet");
    }
}