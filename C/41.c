#include<stdio.h>
void sort(int n,float w[50],float p[50])
{
    int i,temp,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i] < p[j])
            {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;

                temp = w[j];
                w[j] = w[i];
                w[i] = temp;
            }
        }
    }
}
void Knapsack(int no,float wt[50],float pft[50],float max)
{
    int i,j;
    float total,tpft;
    for(i=0;i<no;i++)
    {
        if(total+wt[i] <= max)
        {
            total = total + wt[i];
            tpft = tpft + pft[i];
        }
        else
        {
            for(j=i+1;j<no;j++)
            {
                if(total+wt[j] <= max)
                {
                    total = total + wt[j];
                    tpft = tpft + pft[j];
                }
            }
        }
    }
    printf("\nTotal Weight: %f",total);
    printf("\nTotal profit: %f\n",tpft);
}
void main()
{
    int n,i,j;
    float temp,p[50],w[50],m;
    printf("Enter the number of items: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter weight of item: ");
        scanf("%f",&w[i]);
        printf("Enter value of item: ");
        scanf("%f",&p[i]);
    }
    printf("\nEnter capacity: ");
    scanf("%f",&m);
    sort(n,w,p);
    Knapsack(n,w,p,m);
}