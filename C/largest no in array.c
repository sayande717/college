//Program to find the largest and 2nd largest number in an array.
#include<stdio.h>
void main()
{
int n,i,a[100],max1=0,max2=0;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter array elements:\n");
for(i=0;i<n;i++)
{
printf("%d:",(i+1));
scanf("%d",&a[i]);
if(a[i]>max1)
{
max2=max1;
max1=a[i];
}
else if(a[i]>max2&&a[i]<max1)
max2=a[i];
}
printf("Largest number:%d",max1);
printf("\n2nd largest number:%d",max2);
}