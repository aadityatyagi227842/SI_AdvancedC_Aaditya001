#include<stdio.h>
void main()
{
int arr[]={1,2,3,1,1,7,1,1,1,3};
int size=sizeof(arr)/sizeof(arr[0]);
int count=0;
for(int i=0;i<=size;i++)
{
for(int j=i;j<=size;j++)
{
if(arr[i]==arr[j])
{
count++;
}
}
if(count>size/2)
{
printf("Majority element is %d",arr[i]);
break;
}
}
}
