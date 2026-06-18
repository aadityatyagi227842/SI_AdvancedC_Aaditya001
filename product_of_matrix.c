#include <stdio.h>
void main()
{
int i,j,k,M[3][3],N[3][3],P[3][3];
printf("Enter the martix A \n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&M[i][j]);
}
}
printf("Enter the matrix B \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&N[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
P[i][j]=0;
for(k=0;k<3;k++)
{
P[i][j]=M[i][k]*N[k][j]+P[i][j];
}
}
}
printf("After multiplication \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d \n",P[i][j]);
}
}
}
