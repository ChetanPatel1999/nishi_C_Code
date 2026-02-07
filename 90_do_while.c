#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please ! buy a cricket kit for me ..\n");
        printf("if papa did not buy cricket kit so press 1 : ");
        scanf("%d", &num);
    } while (num == 1);

    printf("thanks papa %c", 3);
}