#include <stdio.h>
int main()
{
   int matrix[5][3];
    int transpose[3][5];
    int i,j;
    printf("Enter elements for a 5x3 matrix:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Element[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n Original 5x3 Matrix:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("\nTransposed 3x5 Matrix:\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
