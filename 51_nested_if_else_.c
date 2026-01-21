// club entry and order something and display bill
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 17
    if (age >= 18)
    {
        printf("welcome to my club ! \n");
        printf("club menu : \n");
        printf("1. pasta     : 70\n");
        printf("2. sandwitch : 150\n");
        printf("3. noodles   : 100\n");
        printf("order something : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your pasta is orderd please pay 70 rs\n");
        }
        else if (order == 2)
        {
            printf("your sandwitch is orderd please pay 150 rs\n");
        }
        else if (order == 3)
        {
            printf("your noodles is orderd please pay 100 rs\n");
        }
        else
        {
            printf("choose correct item\n");
        }
    }
    else
    {
        printf("your are not adult please try after %d year ", 18 - age);
    }
}