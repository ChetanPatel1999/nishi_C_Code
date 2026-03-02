#include <stdio.h>
void main()
{
    int mat[2][3] = {{12, 34,67}, {44, 55,23}};
    printf("matrix element are :\n");
    int i, j;
    for (i = 0; i < 2; i++) // 3
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}