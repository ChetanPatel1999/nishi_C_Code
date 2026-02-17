#include <stdio.h>
void fun2();
void fun3();
void fun1()
{
    fun2();
    printf("hello i am fun1\n");
}
void fun2()
{
    fun3();
    printf("hello i am fun2\n");
}
void fun3()
{
    printf("hello i am fun3\n");
}
void main()
{
    printf("main fun is start..\n");
    fun1();
    printf("main function is end");
}