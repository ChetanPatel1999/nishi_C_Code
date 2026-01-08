#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);//19
    printf("eat some food\n");
    if (age >= 18)
    {
        printf("drive car\n");
        printf("do vote\n");
    }
    printf("play game\n");
}