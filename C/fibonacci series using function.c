//Program to print fibonacci series using recursion.
#include<stdio.h>
int fibo(int x);
void main()
{
int n,i;
printf("Enter number of elements:");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("%d ", fibo(i));
}
}
int fibo(int n)
{
if(n==0||n==1)
return n;
else
return(fibo(n-1)+fibo(n-2));
}