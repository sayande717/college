#include<stdio.h>
#define INF 1000
int vertex[100],wght[10][10],new_wght[10][10],n,closed[10];
int inclose(int i, int n1)
{
    int j;
    for(j = 0;j<=n1;j++)
        if(closed[j] == i)
            return 1;
        return 0;
}

void buildtree()
{
    int i = 0,j,count=0,min,v1=0,v2=0;
    closed[0] = 0;
    while(count < n-1)
    {
        min = INF;
        for(i=0;i<=count;i++)
            if((wght[closed[i]][j] < min) && (!inclose(j,count)))
            {
                min = wght[closed[i]][j];
                v1 = closed[i];
                v2 = closed[j];
            }
            new_wght[v1][v2] = new_wght[v2][v1] = min;
            count++;
            closed[count] = v2;
            printf("\nScan %d: %d::....%d\n",count,v1+1,v2+1,min);
    }
}

void main()
{
    int i,j,ed,sum=0;
    printf("\nPrims algorithm to find spanning tree");
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        vertex[i] = i+1;
        for(j=0;j<n;j++)
        {
            wght[i][j] = INF;
            new_wght[i][j] = INF;
        }
    }
    printf("Getting weight");
    printf("\nEnter 0 if path does not exist between {v1,v2} else enter weight: \n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("\n%d....%d: ",vertex[i],vertex[j]);
            scanf("%d",&ed);
            if(ed>=1)
                wght[i][j] = wght[j][i] = ed;
        }
    }
    printf("\nNodes currently added to spanning tree: ");
    buildtree();
    printf("\nMinimum spanning tree");
    printf("\nList of edges: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            if(new_wght[i][j]!=INF)
            {
                printf("\n\t%d....%d = %d",vertex[i],vertex[j],new_wght[i][j]);
                sum+=new_wght[i][j];
            }
    }
    printf("\nTotal weight: %d",sum);   
}