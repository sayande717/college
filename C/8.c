//Program to find the GCD of two numbers.
#include<stdio.h>
void main()
{
int a,b,i,gcd;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
if(a%i==0&&b%i==0)
gcd=i;
printf("GCD:%d",gcd);
}