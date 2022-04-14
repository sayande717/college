#include<stdio.h>
int a[100],max,min;

void max_min(int i, int j)
{
    int max1,min1,mid;
    if (i == j)
        max = min = a[i];
    else
    {
        if(i == j-1)
        {
            if (a[i] < a[j])
            {
                max = a[j];
                min = a[i];
            }
            else
            {
                max = a[i];
                min = a[j];
            }
        }
        else
        {
            mid = (i+j)/2;
            max_min(i,mid);
            max1 = max;
            min1 = min;
            max_min(mid+1,j);
            if(max < max1)
                max = max1;
            if(min > min1)
                min = min1;
        }
    }
}

void main()
{
    int i,no;
    printf("Enter array size: ");
    scanf("%d",&no);
    printf("Enter elements: \n");
    for(i=0;i<no;i++)
    {
        //printf("Element %d: ",(i+1));
        scanf("%d",&a[i]);
    }
    max = min = a[0];
    max_min(1,no);
    printf("\nMaximum is: %d",max);
    printf("\nMinimum is: %d\n",min);
}