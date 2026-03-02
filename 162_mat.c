#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r); // 3
    printf("enter colm : ");
    scanf("%d", &c); // 3
    int mat[r][c];
    int i, j;
    printf("enter element are :\n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are :\n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("matrix even element are :\n");
    int evenCount = 0;
    int oddCount = 0;
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 3
        {
            if (mat[i][j] % 2 == 0)
            {
                printf("%d ", mat[i][j]);
                evenCount++;
            }
            else
            {
                printf("0 ");
                oddCount++;
            }
        }
        printf("\n");
    }

    printf("total even number in matrix : %d\n", evenCount);
    printf("total odd number in matrix : %d\n", oddCount);
}