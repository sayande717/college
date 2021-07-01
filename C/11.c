//Program to add two matrices.
#include<stdio.h>
void main()
{
int a1[100][100],a2[100][100],a3[100][100],r,c,i,j,a;
printf("Enter no. of rows & columns for both matrices:\n");
scanf("%d%d",&r,&c);
printf("Enter the elements, R=Row & C=Column.\n");
for(a=1;a<=2;a++)
{
printf("Array %d - \n",a);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
printf("R %d, C %d - ",(i+1),(j+1));
if(a==1)
scanf("%d",&a1[i][j]); //Taking input for array 1.
else scanf("%d",&a2[i][j]); //Taking input for array 2.
a3[i][j]=a1[i][j]+a2[i][j]; //Calculating the sum.
}
}
printf("Result:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a3[i][j]); //Printing the results.
printf("\n");
}
}