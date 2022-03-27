#include<stdio.h>
int Knapsackpart(float p[],float v[],float w[],int n, int c)
{
    int i;
    float t = 0;
    for(i=0;i<n;i++)
    {
        if(t<c)
        {
            if(t+w[i]>c)
            {
                w[i]=c-t;
                v[i]=w[i]*p[i];
                t=c;
            }
            else
                t = t + w[i];
        }
        else
            break;
    }
    return i;
}
void sort(int n,float p[50],float w[50],float v[50])
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]<p[j])
            {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;

                temp = v[j];
                v[j] = v[i];
                v[i] = temp;

                temp = w[j];
                w[j] = w[i];
                w[i] = temp;
            }
        }
    }
}
void main()
{
    int n,i,j;
    float c,p[10],w[50],v[10],sum_vi=0.0,sum_wi=0.0,temp;
    printf("\nEnter the number of items: ");
    scanf("%d",&w[i]);
    for(i=0;i<n;i++)
    {
        printf("Enter weight of item: ");
        scanf("%d",&w[i]);
        printf("Enter value of item: ");
        scanf("%f",&v[i]);
        p[i]=v[i]/w[i];
    }
    printf("Enter capacity: ");
    scanf("%f",&c);
    sort(n,p,w,w);
    n = Knapsackpart(p,v,w,n,c);
    for(i=0;i<n;i++)
    {
        printf("\n%f",w[i]);
        printf("\n%f",v[i]);
        printf("\t%f",p[i]);
        sum_vi = sum_vi + v[i];
        sum_wi = sum_wi + w[i];
    }
    printf("\n\nSum of weight: %f",sum_vi);
    printf("\n\nTotal Weight: %f",sum_wi);
}