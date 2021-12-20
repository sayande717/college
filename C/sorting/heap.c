#include<stdio.h>
void heapify(int a[],int n,int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && a[left] > a[largest])
        largest = left;
    if(right < n && a[right] > a[largest])
        largest = right;
    if(largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i;
    for(i = n/2-1;i>=0;i--)
        heapify(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a,i,0);
    }
}
void main()
{
    int array[100], n, i;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", (i + 1));
        scanf("%d", &array[i]);
    }
    heapsort(array,n);
    printf("\nSorted Array : ");
    for (i = 0; i < n; i++)
        printf("%d\t", array[i]);
    printf("\n");
}