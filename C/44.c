#include<stdio.h>
#include<limits.h>
int matrixChain(int p[], int i, int j)
{
    int k, count, min = INT_MAX;
    if(i == j)
        return 0;
    for(k=i;k<j;k++)
    {
        count = matrixChain(p,i,k) + matrixChain(p,k+1,j);
        if (count < min)
            min = count;
    }
}

void main()
{
    int arr[100];
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The optimal solution is: %d\n",matrixChain(arr,1,n-1));
}