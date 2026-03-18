#include <stdio.h>
#include <string.h>
union pen
{
    char c_name[12];
    int price;
    float rating;
    char ink_color[12];
};
void main()
{
    union pen p1;
    printf("size of struct = %d\n",sizeof(p1));
    strcpy(p1.c_name, "cello");

    p1.price = 5;

    // p1.rating = 3.4;
    // strcpy(p1.ink_color, "blue");

   
    printf("pen1 info : \n");
    printf("pen name : %s\n", p1.c_name);
    printf("pen price: %d\n", p1.price);
    printf("pen rating: %.1f\n", p1.rating);
    printf("pen ink_color: %s\n", p1.ink_color);
    printf("------------------------------------------\n");  
}