#include <stdio.h>
void main()
{
    int array[50], size, counter, searchnum;
    int firstindex, lastindex, middleindex;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter array elements : \n");
    for (counter = 0; counter < size; counter++)
    {
        printf("Element %d : ", (counter + 1));
        scanf("%d", &array[counter]);
    }
    printf("Enter number to search : ");
    scanf("%d", &searchnum);
    firstindex = 0;
    lastindex = size - 1;
    middleindex = (firstindex + lastindex) / 2;
    while ((firstindex <= lastindex) && (array[middleindex]!=searchnum))
    {
        if (searchnum < array[middleindex])
            lastindex = middleindex - 1;
        else
        {
            firstindex = middleindex + 1;
            middleindex = (firstindex + lastindex) / 2;
        }
    }
    if(array[middleindex]==searchnum)
    printf("Element found at position %d.",(middleindex+1));
    else
    printf("Element not found.");
    printf("\n");
}