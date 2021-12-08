#include <stdio.h>
void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
    }
    while (i < j)
    {
        while (list[i] <= list[pivot] && i <= high)
            i++;
        while (list[j] > list[pivot] && j >= low)
            j--;
        if (i < j)
        {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
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
    quicksort(a, 0, n - 1);
    printf("\nSorted Array : ");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}