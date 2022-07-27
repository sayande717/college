#include<stdio.h>
int binarysearch(int arr[],int l,int r,int x)
{
    if (r >= l)
    {
        int mid = (l+r)/2;
        if (arr[mid] == x)
            return mid;
        if(arr[mid] > x)
            return binarysearch(arr,l,mid-1,x);
        return binarysearch(arr,mid+1,r,x);
    }
    else if (arr[0]==x)
        return 0;
    return -1;
}

void main()
{
    int arr[100],size,x,i,result;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the array elements: \n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&x);
    result = binarysearch(arr,0,size-1,x);
    (result == -1)?printf("Element is not present in array.\n"):printf("Element is present in position %d\n",result+1);
}