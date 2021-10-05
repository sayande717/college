#include <stdio.h>
int size, element;
struct queue
{
    int array[100];
    int front, rear;
};
struct queue *ptr;
void insert(int input)
{
    if (ptr->rear == -1 && ptr->front == -1)
    {
        ptr->rear = 0;
        ptr->front = 0;
        ptr->array[ptr->rear] = input;
    }
    else
    {
        if (ptr->front == -1)
            ptr->front = 0;
        ptr->rear = ptr->rear + 1;
    }
    printf("\nElement inserted succesfully.");
}
void delete ()
{
    printf("Element %d was deleted", ptr->array[ptr->front]);
    ptr->front = ptr->front + 1;
}
void display()
{
    int counter;
    printf("\nQueue Elements : \n");
    for (counter = 0; counter < size; counter++)
        printf("\t%d", ptr->array[counter]);
}
void main()
{
    int choice=1;
    while (choice != 4)
    {
        printf("\nYour choices - ");
        printf("\n1. Insert element.");
        printf("\n2. Delete element.");
        printf("\n3. Display Queue elements.");
        printf("\n4. Exit.\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (ptr->rear == size - 1)
                printf("\nQueue Overflow.");
            else
                printf("\nEnter the element to be inserted : ");
            scanf("%d", &element);
            insert(element);
            break;
        case 2:
            if (ptr->front == -1 || ptr->front > ptr->rear)
                printf("\nQueue Underflow.");
            else
                delete ();
            break;
        case 3:
            display();
            break;
        default:
            printf("\nInvalid input.");
            break;
        }
    }
}