#include <stdio.h>
void main()
{
    int a;
    char b;
    printf("enter a : ");
    scanf("%d", &a);//45
    
    printf("enter b : ");
    // scanf("%c");
    getchar();
    scanf("%c", &b);
    printf("a = %d\n", a);
    printf("b = %c\n", b);
}