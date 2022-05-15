#include<stdio.h>
int f,r,c,n,v1,q[20],p[20],visited[20],a[20][20],i,j;

void bfs(int v)
{
    f=r=-1;
    visited[v]=1;
    f++;
    r++;
    q[r]=v;
    while(f<=r)
    {
        v=q[f];
        f++;
        for(i=1;i<=n;i++)
        {
            if(a[v][i]==1&&visited[i]==0)
            {
                printf("    %d",i);
                visited[i]=1;
                r++;
                q[r]=i;
            }
        }
        printf("\n");
    }
}

void main()
{
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d....%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the source vertex: ");
    scanf("%d",&v1);
    bfs(v1);
}