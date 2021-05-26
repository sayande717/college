//Program to print all 3 digit Armstrong numbers.
#include<stdio.h>
void main()
{
int i,i1,r,s=0;
printf("All 3 digit Armstrong numbers:");
for(i=100;i<=999;i++)
{
i1=i;
while(i1!=0)
{
r=i1%10;
s+=(r*r*r);
i1=i1/10;
}
if(s==i)
printf("%d ",s);
s=0;
}
printf("\n");
}