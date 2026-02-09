// 10. Create a program that simulates a salary distribution system.
//  1.Take the total available salary amount at the start.
//  2.Using a do...while loop, repeatedly take input for the amount to
//  distribute  to employees.
//  3.Keep subtracting the distributed amounts from the total.
//  4.Stop the process when the entire amount has been distributed or no
//  more money is left.
//  5.At the end, display:
//  a. The total amount distributed.
//  b. The remaining balance
#include <stdio.h>
void main()
{
    int sallary, totalAmount = 20000, distributeSallary = 0, p;
    printf("<-----------sallary distribute app----------->\n");
    printf("----------------------------------------------\n");
    printf("               total amount = %d\n", totalAmount);
    printf("----------------------------------------------\n");
    do
    {
        printf("enter emp sallary : ");
        scanf("%d", &sallary); //1000
        distributeSallary = distributeSallary + sallary;
        if (distributeSallary <= totalAmount)
        {
            printf("\nsuccesfully distribute sallary\n\n");
        }
        else
        {
            printf("\nunsufficiant amount \n");
            distributeSallary = distributeSallary - sallary;
            printf("you have only %d amount\n\n",totalAmount-distributeSallary);
        }

        printf("you have more emp press 1 : ");
        scanf("%d", &p);
    } while (p == 1);

    printf("----------------------------------------------\n");
    printf("       total distribute sallary =  %d\n", distributeSallary);
    printf("----------------------------------------------\n");
    printf("        reamaing amount =  %d", totalAmount - distributeSallary);
}