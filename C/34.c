#include <stdio.h>
void selectionsort(int arr[], int l)
{
    int n, i, j, temp;
    for (i = 0; i < l; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
void main()
{
    int a[100], n, i;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", (i + 1));
        scanf("%d", &a[i]);
    }
    selectionsort(a, n);
    printf("\nSorted Array : ");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}