#include <stdio.h>
void main()
{
    int n, a[100], i, posm, m;
    //Take array elements as input from the user.
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("Enter array elements - \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the position in which you want to insert the new element:");
    scanf("%d", &posm);
    //Check if position value entered is valid.
    if (posm < 0 || posm > n)
        printf("Position cannot be less than 0 or greater than number of elements in the array.");
    else
    {
        printf("Enter the element:");
        scanf("%d", &m);
        //Insert the element in the desired position in the array.
        for (i = n - 1; i >= posm - 1; i--)
            a[i + 1] = a[i];
        a[posm - 1] = m;
        //Print the resultant array.
        printf("Resultant array:\n");
        for (i = 0; i <= n; i++)
            printf("%d\t", a[i]);
    }
    printf("\n");
}