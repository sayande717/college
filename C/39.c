#include<stdio.h>
void binSearch(int Key,int a[],int n)
{
    int lower = 0,mid,j=-1,upper = n-1;
    while(upper >= lower)
    {
        mid = (upper+lower)/2;
        if(Key == a[mid])
        {
            j = mid;
            break;
        }
        else
        {
            if (Key > a[mid])
                lower = mid + 1;
            else
                upper = mid - 1;
        }
    }
    if(j == -1)
        printf("The number not found.");
    else
        printf("The number is found in position %d."+j);    
}
int main()
{
    int a[100],i,n,Key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be searched: ");
    scanf("%d",&Key);
    binSearch(Key,a,n);
    return 0;
}