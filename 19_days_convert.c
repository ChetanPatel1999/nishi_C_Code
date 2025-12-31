//. Write a program to convert specified days into years, weeks and days.
#include <stdio.h>
void main()
{
    int days, year, month, week;
    printf("enter total days : ");
    scanf("%d", &days);
    year = days / 365;
    days = days % 365;
    month = days / 30;
    days = days % 30;
    week = days / 7;
    days = days % 7;
    printf("year : %d\n", year);
    printf("month : %d\n", month);
    printf("week : %d\n", week);
    printf("days : %d\n", days); 
}