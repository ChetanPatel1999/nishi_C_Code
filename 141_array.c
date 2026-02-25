#include <stdio.h>
void main()
{
    int marks[] = {30, 50, 10, 60, 70, 100, 80};
    int i;
    int n = sizeof(marks) / sizeof(int);
    printf("students marks are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }
    // 30, 50, 10, 60, 70
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + marks[i]; // 220
    }
    printf("\ntotal marks sum = %d", sum);
    printf("\ntotal marks average = %.2f", sum / (float)n);
}