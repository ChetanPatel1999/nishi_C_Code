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

    struct pen p1, p2, p3;
    printf("enter pen1 info : \n");
    printf("enter pen c_name :");
    scanf("%s", p1.c_name);
    printf("enter pen price :");
    scanf("%d", &p1.price);
    printf("enter pen rating :");
    scanf("%f", &p1.rating);
    printf("enter pen ink_color :");
    scanf("%s", p1.ink_color);

    printf("enter pen2 info : \n");
    printf("enter pen c_name :");
    scanf("%s", p2.c_name);
    printf("enter pen price :");
    scanf("%d", &p2.price);
    printf("enter pen rating :");
    scanf("%f", &p2.rating);
    printf("enter pen ink_color :");
    scanf("%s", p2.ink_color);

    printf("\npen1 info : \n");
    printf("pen name : %s\n", p1.c_name);
    printf("pen price: %d\n", p1.price);
    printf("pen rating: %.1f\n", p1.rating);
    printf("pen ink_color: %s\n", p1.ink_color);
    printf("------------------------------------------\n");

    printf("\npen2 info : \n");
    printf("pen name : %s\n", p2.c_name);
    printf("pen price: %d\n", p2.price);
    printf("pen rating: %.1f\n", p2.rating);
    printf("pen ink_color: %s\n", p2.ink_color);
    printf("------------------------------------------\n");
}