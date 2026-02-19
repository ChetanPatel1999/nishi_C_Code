// no return type but with parameter
#include <stdio.h>
void subtraction(int a, int b)
{
    int c;
    c = a - b;
    printf("subtraction = %d\n", c);
}
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
    subtraction(a, b);
}
void userInput()
{
    int r, s;
    printf("enter r : ");
    scanf("%d", &r);
    printf("enter s : ");
    scanf("%d", &s);
    addition(r, s);
}
void main()
{
    addition(4, 8);
    // subtraction(50, 20);
    addition(45, 8);
    int x = 70;
    int y = 12;
    addition(x, y);
    userInput();
}