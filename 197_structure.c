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

    struct pen p1, p2, p3 = {"goldex", 15, 2.5, "black"};
    strcpy(p1.c_name, "cello");
    p1.price = 5;
    p1.rating = 3.4;
    strcpy(p1.ink_color, "blue");

    strcpy(p2.c_name, "apsara");
    p2.price = 10;
    p2.rating = 4.4;
    strcpy(p2.ink_color, "red");

    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.c_name);
    printf("pen price: %d\n", p1.price);
    printf("pen rating: %.1f\n", p1.rating);
    printf("pen ink_color: %s\n", p1.ink_color);
    printf("------------------------------------------\n");

    printf("pen2 info : \n");
    printf("pen name : %s\n", p2.c_name);
    printf("pen price: %d\n", p2.price);
    printf("pen rating: %.1f\n", p2.rating);
    printf("pen ink_color: %s\n", p2.ink_color);
    printf("------------------------------------------\n");

    printf("pen3 info : \n");
    printf("pen name : %s\n", p3.c_name);
    printf("pen price: %d\n", p3.price);
    printf("pen rating: %.1f\n", p3.rating);
    printf("pen ink_color: %s\n", p3.ink_color);
    printf("------------------------------------------\n");
}