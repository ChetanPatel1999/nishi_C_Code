#include <stdio.h>
#include <string.h>
struct pen
{
    char c_name[12];
    int price;
    float rating;
    char ink_color[12];
};
void setData(struct pen arr[], int index, char name[], int price, float rating, char ink[])
{
    strcpy(arr[index].c_name, name);
    arr[index].price = price;
    arr[index].rating = rating;
    strcpy(arr[index].ink_color, ink);
}
void above_5_pen(struct pen p[], int n)
{
    int i;
    printf("\npen only above then 5 rs : \n");
    for (i = 0; i < n; i++)
    {
        if (p[i].price > 5)
        {

            printf("pen name : %s\n", p[i].c_name);
            printf("------------------------------------------\n");
        }
    }
}
void blue_ink_pen(struct pen p[], int n)
{
    int i;
    printf("\npen only blue ink : \n");
    for (i = 0; i < n; i++)
    {
        if (strcmp(p[i].ink_color, "blue") == 0)
        {

            printf("pen name : %s\n", p[i].c_name);
            printf("------------------------------------------\n");
        }
    }
}

void b_ink_pen(struct pen p[], int n)
{
    int i;
    printf("\npen only start ink_color with b : \n");
    for (i = 0; i < n; i++)
    {
        if (p[i].c_name[0]=='b')
        {

            printf("pen name : %s\n", p[i].c_name);
            printf("------------------------------------------\n");
        }
    }
}
void main()
{
    struct pen p[5];
    int i;

    setData(&p[0], 0, "cello", 5, 2.5, "blue");
    setData(p, 1, "goldex", 15, 3.5, "black");
    setData(p, 2, "apsara", 50, 4.5, "blue");
    setData(p, 3, "natraj", 2, 5.5, "red");
    setData(p, 4, "trimax", 60, 6.5, "blue");

    for (i = 0; i < 5; i++)
    {
        printf("\npen%d info : \n", i + 1);
        printf("pen name : %s\n", p[i].c_name);
        printf("pen price: %d\n", p[i].price);
        printf("pen rating: %.1f\n", p[i].rating);
        printf("pen ink_color: %s\n", p[i].ink_color);
        printf("------------------------------------------\n");
    }

    above_5_pen(p, 5);

    blue_ink_pen(p, 5);
    b_ink_pen(p, 5);
}
