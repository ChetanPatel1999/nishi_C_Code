// Write a program takes a number as input and prints each digit of the
// number in reverse order, with each digit displayed on a separate line.
#include <stdio.h>
void main()
{
    int num,rem;
    printf("enter a num : ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        printf("%d\n", rem);
        num = num / 10;
    }
}