//Program to print all 3 digit Peterson numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
int i,i1,j,r,f=1,s=0;
printf("All 3 digit Peterson numbers:");
for(i=100;i<=999;i++)
{
i1=i;
while(i1!=0)
{
r=i1%10;
for(j=1;j<=r;j++)
f=f*j;
s+=f;
f=1;
i1=i1/10;
}
if(s==i)
printf("%d ",s);
s=0;
}
}