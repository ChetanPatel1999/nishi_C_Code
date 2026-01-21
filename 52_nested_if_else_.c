// Write a program to read the age of a candidate and determine whether he 
// is eligible to cast his/her own vote in india or not.
#include<stdio.h>
void main()
{
    char country;
    printf("enter country name ( I ) if you are indian  : ");
    scanf("%c",&country);
    if(country =='I')
    {
       int age;
       printf("enter your age : ");
       scanf("%d",&age);
       if(age>=18)
       {
        printf("you can vote in india");
       }
       else{
        printf("you can not vote in india");
       }
         
    }
    else
    {
        printf("you are not indian");
    }
}