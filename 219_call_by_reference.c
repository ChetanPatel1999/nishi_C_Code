// call reference
#include <stdio.h>
void fun(int *num)
{
    printf("num = %d\n", *num); // 12
    *num = 90;
    printf("num = %d\n", *num); // 90
}
void setArr(int *arr)
{
    // arr[0] = 56;
    // arr[1] = 900;
    *arr = 56;
    arr++;
    *arr = 900;
}
void main()
{
    int a = 12;
    printf("a = %d\n", a); // 12
    fun(&a);               // call by reference/address
    printf("a = %d\n", a); // 90

    int arr[5];
    setArr(&arr[0]); //&arr[0]
    printf("%d %d", arr[0], arr[1]);
}

// //call by value example
// #include <stdio.h>
// void fun(int num)
// {
//     printf("num = %d\n", num);//12
//     num = 90;
//     printf("num = %d\n", num);//90
// }
// void main()
// {
//     int a = 12;
//     printf("a = %d\n", a);//12
//     fun(a); // call by value
//     printf("a = %d\n", a);//12
// }