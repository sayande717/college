#include <stdio.h>
struct queue
{
    int array[100], front, rear, size;
};
struct queue *ptr;
void insert(int input)
{
    if (ptr->rear == -1 && ptr->front == -1)
    {
        ptr->rear = 0;
        ptr->front = 0;
    }
    else
        ptr->rear = ptr->rear + 1;
    ptr->array[ptr->rear] = input;
    printf("\nElement inserted succesfully.\n");
}
void delete ()
{
    if (ptr->front == ptr->rear)
        ptr->front = ptr->rear = -1;
    else
        ptr->front++;
}
void display()
{
    int counter;
    printf("\nQueue Elements : \n");
    for (counter = ptr->front; counter <= ptr->rear; counter++)
        printf("\t%d", ptr->array[counter]);
}
void main()
{
    int choice = -1, element;
    ptr -> front = -1;
    ptr -> rear = -1;
    printf("Queue implementation using arrays.");
    printf("\nNumber of elements should be <100.");
    while (choice != 4)
    {
        printf("\nYour choices - ");
        printf("\n1. Insert element.");
        printf("\n2. Delete element.");
        printf("\n3. Display queue elements.");
        printf("\n4. Exit.\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (ptr->rear == ptr->size - 1)
                printf("\nQueue Overflow.\n");
            else
            {
                printf("\nEnter the element to be inserted : ");
                scanf("%d", &element);
                insert(element);
            }
            break;
        case 2:
            if (ptr->front <= -1 || ptr->front > ptr->rear)
                printf("\nQueue Underflow.\n");
            else
                delete ();
            break;
        case 3:
            if (ptr->rear == -1)
                printf("\nQueue is empty.\n");
            else
                display();
            break;
        case 4:
            printf("\nExited succesfully.");
            break;
        default:
            printf("\nInvalid input.\n");
            break;
        }
    }
}