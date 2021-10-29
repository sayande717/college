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

int insert_first()
{
    NODE *temp1;
    temp1 = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter the data item : ");
    scanf("%d", &temp1->num);
    temp1->ptr = first;
    first = temp1;
    return (0);
}

int create()
{
    int choice = 1;
    while (choice == 1)
    {
	newnode = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter the data item : ");
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
	//fflush(stdin);
	printf("Press 1 to enter another data item, otherwise 0 : ");
	scanf("%d", &choice);
	}
    temp->ptr = 0;
    /*  reset temp to the beginning */
    temp = first;
    return (0);
} 

int display()
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
    printf("No. of nodes in the list = %d\n\n", count);
    return (0);
}
void main()
{
    int ch;
    first = 0;
    while (ch != 4)
    {
	printf("\nYour choices - ");
	printf("\n1 - Insert data item.");
	printf("\n2 - Insert data item at first position.");
	printf("\n3 - Diplay linked list.");
	printf("\n4 - Exit.");
	printf("\nEnter your choice : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 0:
	    exit(0);
	    break;
	case 1:
	    create();
	    break;
	case 2:
	    insert_first();
	    break;
	case 3:
	    display();
	    break;
	case 4:
	    break;
	default:
	    printf("Wrong Input\n");
	}
    }
}
