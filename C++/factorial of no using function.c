//Program to find out the factorial of a number using recursion.
#include<stdio.h>
int fact(int);
void main()
{
int f,i;

printf("Enter a number:");
scanf("%d",&f);
printf("Factorial of %d is %d",f,fact(f));

}
int fact(int f)
{
int i,n=1;
for(i=1;i<=f;i++)
n=n*i;
return n;
}