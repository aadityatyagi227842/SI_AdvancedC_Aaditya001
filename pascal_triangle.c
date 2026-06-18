#include <stdio.h>
int main() {
    int rows, a=1;
    printf("Enter the number of lines (rows) for Pascal's Triangle \n ");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for (int j=1;j<=rows-i;j++)
            {
            printf("  ");
        }
   for(int k=0;k<=i;k++)
        {
            if (k==0||i==0)
            {
                a=1;
            }
   else
            {
         a=a*(i-k+1)/k;
            }
            printf("%4d",a);
        }
        printf("\n");
    }

    return 0;
}
