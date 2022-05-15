#include<stdio.h>
void djikstra(int cost[100][100],int n)
{
    int c=1,s,i,dist[100],cnt=0,z,k,j,u,v;
    while(c)
    {
        printf("Enter the source node whose shortest path is to be determined:");
        scanf("%d",&s);
        for(i=1;i<=n;i++)
            dist[i]=cost[s][i];
        for(k=1;k<=n;k++)
        {
            for(z=1;z<=n;z++)
            {
                if(cost[z][u]!=1000)
                    cnt=cnt+1;
            }
            if(cnt!=0)
            {
                cnt=0;
                for(i=1;i<=n;i++)
                {
                    if(dist[u]>dist[i]+cost[i][u])
                        dist[u]=dist[i]+cost[i][u];
                }
            }
        }
    }
    printf("Shortest path from %d:",s);
    for(i=1;i!=s;i++)
        if(i!=s)
            printf("\n%d:%d",i,dist[i]);
    printf("Continue? Y=1 or N=0");
    scanf("%d",&c);
}

void main()
{
    int n,i,j,cost[100][100];
    printf("Enter number of vertices:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d....%d:",i,j);
            scanf("%d",&cost[i][j]);
        }
    }
    djikstra(cost,n);
}