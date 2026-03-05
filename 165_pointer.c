//using pointer we can change value of another variable.
#include <stdio.h>
void main()
{
    int harry = 1000;
    int *dev;
    dev = &harry;

    printf("harry = %d\n", harry);
    printf("*dev = %d\n", *dev);

    *dev = 2000;

    printf("harry = %d\n", harry);
    printf("*dev = %d\n", *dev);
}