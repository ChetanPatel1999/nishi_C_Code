// Write a program to check given number is even or odd.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 500
    num % 2 == 0 ? printf("num is even") : printf("num is odd");
}