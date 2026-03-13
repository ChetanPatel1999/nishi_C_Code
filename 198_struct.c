#include <stdio.h>
#include <string.h>
struct pen
{
    char c_name[12];
    int price;
    float rating;
    char ink_color[12];
};
void display(struct pen p)
{
    printf("pen1 info : \n");
    printf("pen name : %s\n", p.c_name);
    printf("pen price: %d\n", p.price);
    printf("pen rating: %.1f\n", p.rating);
    printf("pen ink_color: %s\n", p.ink_color);
    printf("------------------------------------------\n");
}
void setData(struct pen *p, char name[], int price, float rating, char ink[])
{
    strcpy((*p).c_name, name);
    (*p).price = price;
    (*p).rating = rating;
    strcpy((*p).ink_color, ink);
}
void main()
{

    struct pen p1, p2, p3;

    setData(&p1, "cello", 5, 2.5, "blue");
    setData(&p2, "apsara", 5, 2.5, "blue");
    setData(&p3, "goldex", 5, 2.5, "blue");

    display(p1);
    display(p2);
    display(p3);
}