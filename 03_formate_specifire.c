// here we learn formate specifire
// like %d , %f  , %c
#include <stdio.h>
void main()
{
    // printf("integer value = %d\n", 78);
    // printf("integer value = %d\n", 7 + 8);
    // printf("integer value = %d\n", 7 - 8);
    // printf("integer value = %d\n", 7 * 8);
    printf("my age is %d and my height is %.1f\n", 26, 5.7);
    printf("float value = %f\n", 34.5);
    printf("float value = %.2f\n", 34.5);
    printf("float value = %.1f\n", 34.5);
    printf("float value = %.1f\n", 34.5 + 4.2);
    printf("charcter value = %c\n", 'P');
    printf("charcter value = %c\n", '@');
    printf("charcter value = %c\n", '5');
}