// Write a program to calculate the total salary based on the basic salary:
// If  BS in between 4000-6000     ta 40% & hra is 20%
// If  BS in between 6000-10000    ta 45% & hra is 20%
// If  BS is greater than 10000    ta 55% & hra is 5000
#include <stdio.h>
void main()
{
    float BS, TS;
    printf("enter basic salary : ");
    scanf("%f", &BS);

    if (BS >= 4000 && BS <= 6000)
    {
        TS = BS + (BS * 40) / 100 + (BS * 20) / 100;
        printf("total salary =  %.2f \n", TS);
    }
    else if (BS > 6000 && BS <= 10000)
    {
        TS = BS + (BS * 45) / 100 + (BS * 20) / 100;
        printf("total salary = %.2f\n", TS);
    }
    else if (BS > 10000)
    {
        TS = BS + (BS * 55) / 100 + 5000;
        printf("total salary = %.2f\n", TS);
    }
    else
    {
        printf("Invalid salary\n");
    }
}