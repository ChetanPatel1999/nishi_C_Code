#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 8==8 && 45>99;
    // res = 12 > 77 || 8==12 || 45>99;

    // res = !(12 > 77);
    // res = !((12 < 77) && 12 == 9);
    res = ((12 < 77) && !(12 == 9));

    printf("res = %d ", res);
}