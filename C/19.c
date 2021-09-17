#include <stdio.h>
void main()
{
    int n, a[100], i, position;
    //Take array elements as input from the user.
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter array elements - \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the element you wish to delete:");
    scanf("%d", &position);
    //Check if position value entered is valid.
    if (position < 0 || position > n)
        printf("Position cannot be less than 0 or greater than number of elements in the array.");
    else
    {
        for (i = position - 1; i < n - 1; i++)
            a[i] = a[i + 1];
        //Print the resultant array.
        printf("Resultant array:\n");
        for (i = 0; i < n - 1; i++)
            printf("%d\t", a[i]);
    }
    printf("\n");
}