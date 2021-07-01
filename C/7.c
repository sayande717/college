//Program to find the GCD of two numbers using recursion.
#include<stdio.h>
int gcd(int,int);
void main()
{
int a,b;
printf("Enter 2 numbers:");
scanf("%d%d",&a,&b);
printf("GCD:%d",gcd(a,b));
}
int gcd(int a,int b)
{
int i,gcd;
for(i=1;i<=a&&i<=b;i++)
if(a%i==0&&b%i==0)
gcd=i;
return gcd;
}