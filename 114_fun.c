#include <stdio.h>
void addition(); // function declaration
void main()
{
    printf("hello i am main\n");
    addition(); // function calling
    printf("main function is complete");
}

void addition() // function defination
{
    int a, b, c;
    printf("this is addition app : \n");
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
