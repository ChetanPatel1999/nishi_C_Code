#include <stdio.h>
void main()
{
    int mat[3][3];
    printf("matrix element address are :\n");
    int i, j;
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", &mat[i][j]);
        }
        printf("\n");
    }
}