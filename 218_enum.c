// enum :-enum is a user defind data type which is used to make
// integer constant values .
#include <stdio.h>
enum day
{
    mon=12,
    tue,
    wed,
    thu,
    fri=90,
    sat,
    sun
};
void main()
{
    printf("mon= %d\n", mon);
    printf("tue= %d\n", tue);
    printf("wed= %d\n", wed);
    printf("thu= %d\n", thu);
    printf("fri= %d\n", fri);
    printf("sat= %d\n", sat);
    printf("sun= %d\n", sun);
}