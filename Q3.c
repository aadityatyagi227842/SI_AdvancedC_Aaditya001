#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("After swapping the value of a=%d and b=%d",a,b);
}
