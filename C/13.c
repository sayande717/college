//Program to count the number of digits in a number.
#include<stdio.h>
void main()
{
long n,c=0;
printf("Enter a number:");
scanf("%ld",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("Number of digits:%ld",c);
}