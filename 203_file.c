#include <stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("cube.txt", "a");
    int num, cube;
    printf("enter a num : ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("cube of %d = %d\n", num, cube);
    fprintf(fp,"cube of %d = %d\n", num, cube);
    fclose(fp);
}