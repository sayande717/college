#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *ptr;
};
typedef struct node NODE;
NODE *newnode, *first, *temp = 0;
void insert_first()
{
    NODE *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter the data item : ");
    scanf("%d", &temp->num);
    temp->ptr = first;
    first = temp;
}
void create()
{
    int choice = 1;
    newnode = (NODE *)malloc(sizeof(NODE));
    printf("For creating the linked list, please insert the first data item : ");
    scanf("%d", &newnode->num);
    if (first != 0)
    {
        temp->ptr = newnode;
        temp = newnode;
    }
    else
    {
        first = temp = newnode;
    }
    temp->ptr = 0;
    temp = first;
    printf("\nLinked List created succesfully.\n");
    printf("\nPress 1 to insert another data item, or 0 to go back to main menu : ");
    scanf("%d", &choice);
    while (choice == 1)
    {
        insert_first();
        printf("\nPress 1 to insert another data item, 0 to go to main menu : ");
        scanf("%d", &choice);
    }
}
void display()
{
    int count = 0;
    temp = first;
    printf("\nThe linked list is: ");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp->ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
}
void main()
{
    int ch;
    first = 0;
    //Create the linked list.
    create();
    while (ch != 2)
    {
        printf("\nYour choices - ");
        printf("\n1 - Diplay linked list.");
        printf("\n2 - Exit.");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            break;
        default:
            printf("Wrong Input\n");
        }
    }
}