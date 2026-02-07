#include <stdio.h>
void main()
{
    int age, order, p, c1 = 0, c2 = 0, c3 = 0, totalBill = 0;
    printf("enter your age : ");
    scanf("%d", &age); // 17
    if (age >= 18)
    {
        printf("welcome to my club ! \n");
        do
        {
            printf("club menu : \n");
            printf("1. pasta     : 70\n");
            printf("2. sandwitch : 150\n");
            printf("3. noodles   : 100\n");
            printf("order something : ");
            scanf("%d", &order);
            if (order == 1)
            {
                printf("your pasta is orderd \n");
                c1++;
                totalBill = totalBill + 70;
            }
            else if (order == 2)
            {
                printf("your sandwitch is orderd \n");
                c2++;
                totalBill = totalBill + 150;
            }
            else if (order == 3)
            {
                printf("your noodles is orderd \n");
                c3++;
                totalBill = totalBill + 100;
            }
            else
            {
                printf("choose correct item\n");
            }
            printf("you want to order something else press 1 : ");
            scanf("%d", &p);
        } while (p == 1);

        printf("\n\n<-------------- sir /mem your total bill--------------->\n");
        printf("--------------------------------------------------------\n");
        printf("    item           price     quantity   total    \n");
        if (c1 > 0)
        {
            printf("    pasta           70         %d         %d     \n", c1, c1 * 70);
        }
        if (c2 > 0)
        {
            printf("    sandwitch       150        %d         %d     \n", c2, c2 * 150);
        }
        if (c3 > 0)
        {
            printf("    noodles         100        %d         %d     \n", c3, c3 * 100);
        }
        printf("----------------------------------------------------------\n");
        printf("                   Total bill : %d\n", totalBill);
        printf("----------------------------------------------------------\n");
        printf("                   Thanks to visit us %c \n",3);
    }
    else
    {
        printf("your are not adult please try after %d year ", 18 - age);
    }
}