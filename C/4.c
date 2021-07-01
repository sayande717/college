//Program to find out the factorial of a number.
#include<stdio.h>
void main()
{
int f,i,n=1;
printf("Enter a number:");
scanf("%d",&f);
for(i=1;i<=f;i++)
n=n*i;
printf("Factorial of %d is %d",f,n);
}