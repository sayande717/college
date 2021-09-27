#include<stdio.h>
void main()
{
    int counter,size,array[50],searchnum;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter array elements : \n");
    for(counter=0;counter<size;counter++)
    {
        printf("Element %d : ",(counter+1));
        scanf("%d",&array[counter]);
    }
    printf("Enter number to search : ");
    scanf("%d",&searchnum);
    for(counter=0;counter<size;counter++)
    {
        if(array[counter]==searchnum)
        break;
    }
    if(counter==size)
    printf("Element not found.");
    else
    printf("Element found at position %d.",(counter+1));
    printf("\n");
}