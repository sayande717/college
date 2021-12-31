#include<stdio.h>
void bubblesort(int arr[],int l)
{
    int temp,i,j;
    for(i=0;i<(l-1);i++)
    {
        for(j=0;j<(l-i-1);j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void main()
{
    int a[100],n,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("\nSorted Array : ");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
}