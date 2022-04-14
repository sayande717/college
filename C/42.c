#include<stdio.h>
int max(int a, int b)
{
    return (a>b)?a:b;
}
int knapSack(int W, int wt[], int val[], int n)
{
    if(n == 0 || W == 0)
        return 0;
    if(wt[n-1] > W)
        return knapSack(W,wt,val,n-1);
    else
        return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1), knapSack(W,wt,val,n-1));
}

void main()
{
    int val[50],wt[50],v,w,i,W;
    int n = sizeof(val) / sizeof(val[0]);
    printf("Enter total number of items: ");
    scanf("%d",&v);
    for(i=0;i<v;i++)
    {
        printf("Enter value of item %d: ",(i+1));
        scanf("%d",&val[i]);
        printf("Enter weight of item %d: ",(i+1));
        scanf("%d",&wt[i]);
    }
    printf("Enter capacity: ");
    scanf("%d",&W);

    printf("%d",knapSack(W,wt,val,n));
}