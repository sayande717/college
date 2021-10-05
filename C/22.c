#include<stdio.h>
int front=-1;
int rear=-1;
int array[50];
void insert(int n)
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
    array[rear]=n;
    printf("\nElement succesfully inserted.");
}
void delete()
{
    if(front==-1)
    {
        printf("\nQueue Underflow.");
        return ;
    }
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
    printf("\nOptions : \n");
    printf("\n1. Insert Element.");
    printf("\n2. Delete Element.");
    printf("\n3. Display queue.");
    printf("\n4. Exit");
    while (choice != 4)
    {   
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
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