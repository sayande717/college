#include<stdio.h>
int front=-1;
int rear=-1;
int array[50],size;
void insert()
{
    int data;
    if((front==rear + 1) || (front == 0 && rear == size - 1))
    {
        printf("\nQueue overflow.");
        return ;
    }
    else
    {
        printf("Enter the element to be inserted into the queue : ");
        scanf("%d",&data);
    }
    if(front==-1)
    {
        front=0;
    }
    rear=(rear + 1) %size;
    array[rear]=data;
    printf("\nElement succesfully inserted.");
}
void delete()
{
    if(front==-1)
    {
        printf("\nQueue Underflow.");
        return ;
    }
    printf("Element %d deleted from queue",array[front]);
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front = (front + 1) % size;
    }
}
void display()
{
    int counter;
    if(front==-1)
    {
        printf("\nQueue is empty.");
    }
    printf("\nQueue elements : \n");
    for(counter = front; counter <=rear ; counter = (counter + 1) % size)
    {
        printf("\t%d",array[counter]);
    }
}
void main()
{
    int choice;
    printf("Enter size of queue (size < 50) : ");
    scanf("%d", &size);
    printf("\nOptions : \n");
    printf("\n1. Insert.");
    printf("\n2. Delete.");
    printf("\n3. Display queue.");
    printf("\n4. Exit");
    while (choice != 4)
    {   
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Succesfully exited.\n");
                break;
            default:
                printf("Your choice is invalid.\n");
                break;
        }
    }
}