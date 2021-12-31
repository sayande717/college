#include <stdio.h>
void selectionsort(int arr[], int l)
{
    int i, j, loc, temp;
    for (i = 0; i < (l - 1); i++)
    {
        loc = i;
        for (j = i + 1; j <= (l - 1); j++)
            if (arr[j] < arr[loc])
                loc = j;
        if (loc != i)
        {
            temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
        }
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