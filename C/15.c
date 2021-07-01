//Program to print all prime numbers between 1 and n.
#include<stdio.h>
void main()
{
int n,i,j,c=0;
printf("Enter a number:");
scanf("%d",&n);
printf("Prime numbers between 1 and %d : ",n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
if(i%j==0)
c++;
if(c==2)
printf("%d ",i);
c=0;
}
}