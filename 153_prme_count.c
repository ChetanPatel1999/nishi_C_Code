// Write a program to count how many elements in an array are prime and how many are not prime.
#include <stdio.h>
int checkPrime(int num)
{
    int c, j;
    c = 0;
    for (j = 1; j <= num; j++)
    {
        if (num % j == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int arr[5] = {7, 8, 17, 5, 23};

    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // count prime or not prime element in array
    int primeCount = 0, notPrimeCount = 0, num, j, c;
    // 7, 8, 17, 5, 15
    for (i = 0; i < 5; i++) // 1
    {

        if (checkPrime(arr[i]))
        {
            primeCount++; // 3
        }
        else
        {
            notPrimeCount++; // 2
        }
    }

    printf("\ntotal prime count : %d\n", primeCount);
    printf("total not prime count : %d\n", notPrimeCount);
}