//Program to find the highest and lowest marks in an array of n marks.
#include<stdio.h>
int main()
{
int n,i,m[100],max=0,min=100;
printf("Enter number of terms:");
scanf("%d",&n);
printf("Enter marks:\n");
for(i=0;i<n;i++)
{
printf("%d:",(i+1));
scanf("%d",&m[i]);
if(m[i]>max)max=m[i];
if(m[i]<min)min=m[i];
}
printf("Maximum marks:%d",max);
printf("\nMinimum marks:%d",min);
return 0;
}