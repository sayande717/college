#include<stdio.h>
void main()
{
    int n,i,f=0;
    printf("Enter a positive number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    if(n%i==0)
    f++;
    if(f==2)
    printf("%d is a prime number",n);
}