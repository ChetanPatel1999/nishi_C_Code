// formate specifier
//  %d  integer formate specifier
//  %f  float formate specifier
//  %c  character formate specifier
#include <stdio.h>
void main()
{
    // int age = 34;
    // float height = 5.55;
    // char gender = 'f';
    // printf("hello = %d\n", age);
    // printf("height = %f\n", height);
    // printf("height = %.1f\n", height);
    // printf("height = %.2f\n", height);
    // printf("height = %.0f\n", height);
    // printf("gender = %c\n", gender);

    // int age, price, distance;
    // printf("enter your age = ");
    // scanf("%d", &age);
    // printf("enter your price : ");
    // scanf("%d", &price);
    // printf("age = %d\n", age);
    // printf("price = %d", price);

    float age, price, distance;
    printf("enter your age = ");
    scanf("%f", &age);
    printf("enter your price : ");
    scanf("%f", &price);
    printf("age = %.1f\n", age);
    printf("price = %.1f", price);
}
