//Program to convert decimel to binary number.
#include<stdio.h>
void main()
{
int n,a[100],i;
printf("Enter a number:	");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n/=2;
}
printf("Binary:");
for(i=(i-1);i>=0;i--)
printf("%d",a[i]);
}