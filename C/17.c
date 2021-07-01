//Program to print the sum of digits in a number.
#include<stdio.h>
int main()
{
long n,r,s=0;
printf("Enter a number:");
scanf("%ld",&n);
while(n!=0)
{
r=n%10;
s+=r;
n=n/10;
}
printf("Sum of digits:%ld",s);
return 0;
}