#include <stdio.h>
#include <string.h>
struct pen
{
    char c_name[12];
    int price;
    float rating;
    char ink_color[12];
};
void main()
{
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++) // 1
    {
        printf("enter pen%d info : \n", i + 1);
        printf("enter pen c_name :");
        scanf("%s", p[i].c_name);
        printf("enter pen price :");
        scanf("%d", &p[i].price);
        printf("enter pen rating :");
        scanf("%f", &p[i].rating);
        printf("enter pen ink_color :");
        scanf("%s", p[i].ink_color);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\npen%d info : \n", i + 1);
        printf("pen name : %s\n", p[i].c_name);
        printf("pen price: %d\n", p[i].price);
        printf("pen rating: %.1f\n", p[i].rating);
        printf("pen ink_color: %s\n", p[i].ink_color);
        printf("------------------------------------------\n");
    }
}