#include <stdio.h>
void pattern()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 15; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void main()
{
    pattern();
    printf("        name : mayank \n");
    pattern();
    printf("        age : 19 \n");
    pattern();
    printf("        collage : GNSPSC \n");
    pattern();
    
}