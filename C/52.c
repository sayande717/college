#include<stdio.h>
int m,n;
int found=0,G[10][10],x[10];
void NextValue(int k)
{
    int j;
    while(1)
    {
        x[k]=(x[k]+1)%(m+1);
        if(x[k]==0)
            break;
        for(j=1;j<=n;j++)
        {
            if(G[k][j]!=0 && x[k]==x[j])
                break;
        }
        if(j==n+1)
            break;
    }
}
void mColouring(int k)
{
    int i;
    while(1)
    {
        NextValue(k);
        if(x[k]==0)
            break;
        if(k==n)
        {
            for(i-1;i<=k;i++)
                printf("%d\t",x[i]);
            printf("\n");
            found=1;
            break;
        }
        else
            mColouring(k+1);
    }
}
void main()
{
    int i,j;
    printf("Graph Colouring");
    printf("\nEnter the number of vertices: ");
    scanf("%d",&n);
    printf("\nIf edge is between the following vertices Enter 1 otherwise Enter 0:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i!=j)&&(i<j))
            {
                printf("\n%d....%d: ",i,j);
                scanf("%d",&G[i][j]);
            }
        }
    }
    //printf("Enter the number of colours available: ");
    printf("\nSolution: ");
    mColouring(1);
    if(found==0)
        printf("\nNo solution possible.");
}