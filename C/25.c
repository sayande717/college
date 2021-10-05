#include <stdio.h>
int queue[100], front = -1, rear = -1, element;
void insert(int number)
{
    if(rear==-1 && front==-1)
    {
        rear=0;
        front=0;
    }
    else
    rear=rear+1;
    queue[rear]=number;
    printf("\nElement inserted succesfully.");
}
void delete()
{
    printf("\nElement %d deleted sucesfully.",queue[front]);
    if(front==rear)
    front=rear=-1;
    else
    front++;
}
void display()
{
    int counter;
    for (counter = front; counter <= rear; counter++)
    {
        printf("\t%d", queue[counter]);
    }
}
void main()
{
    int choice;
    printf("Queue implementation using arrays.");
    printf("\nNumber of elements should be <100.");
    while (choice != 4)
    {
        printf("\n\nYour choices - ");
        printf("\n1. Insert element.");
        printf("\n2. Delete element.");
        printf("\n3. Display Queue elements.");
        printf("\n4. Exit.\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (rear == 99)
            printf("\nQueue Overflow");
            else
            {
                printf("\nEnter the element to be inserted : ");
                scanf("%d", &element);
                insert(element);
            }
            break;
        case 2:
            if (front <= -1 || front > rear)
                printf("\nQueue Underflow.");
            else
                delete();
            break;
        case 3:
            if (rear==-1)
                printf("\nQueue is empty.");
            else
                display();
            break;
        case 4:
            printf("\nProgram exited succesfully.\n");
            break;
        default:
            printf("\nInvalid input.");
            break;
        }
    }
}