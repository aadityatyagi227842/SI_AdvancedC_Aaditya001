#include<stdio.h>
void main()
{
int a[]={1,3,5,2,2};
int n=5;
for(int i=1;i<n;i++)
{
int LSum=0,RSum=0;
for(int j=0;j<i;j++)
{
LSum=LSum+a[j];
}
for(int k=i+1;k<n;k++)
{
RSum=RSum+a[k];
}
if(LSum==RSum)
{
printf("index = %d",i);
break;
}
}
}
