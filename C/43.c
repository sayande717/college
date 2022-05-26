#include<stdio.h>
int a[100],max,min;
void max_min(int i, int j)
{
    //j=size of the array.
    int mid,max1,min1;
    if (i==j)
        max = min = a[0];
    else if(i==j-1)
    {
        if (a[i] > a[j])
        {
            min = a[j];
            max = a[i];
        }
        else
        {
            min = a[i];
            max = a[j];
        }
    }
    else
    {
        mid=(i+j)/2;
        max_min(i,mid);
        max1=max;
        min1=min;
        max_min(mid+1,j);
        if(max1 > max)
            max = max1;
        if(min1 < min)
            min = min1;
    }
}
void main()
{
    int i,size;
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Enter elements: \n");
    for(i=1;i<=size;i++)
    {
        //printf("Element %d: ",(i+1));
        scanf("%d",&a[i]);
    }
    max = min = a[0];
    max_min(1,size);
    printf("\nMaximum is: %d",max);
    printf("\nMinimum is: %d\n",min);
}