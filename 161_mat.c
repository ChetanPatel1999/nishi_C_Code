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
    // sum of all element
    int sum = 0;
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 3
        {
            sum = sum + mat[i][j];
        }
    }
    printf("sum of all elements : %d\n", sum);
    printf("average of all elements : %.2f\n", sum/(float)(r*c));
}