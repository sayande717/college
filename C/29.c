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
}
void insert_first()
{
	NODE *temp;
	temp = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter the data item : ");
	scanf("%d", &temp->num);
	temp->ptr = first;
	first = temp;
}
void insert_last()
{
	NODE *temp;
	newnode = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter the data item : ");
	scanf("%d", &newnode->num);
	newnode->ptr = NULL;
	temp = first;
	while (temp != NULL && temp->ptr != NULL)
		temp = temp->ptr;
	temp->ptr = newnode;
}
void insert_anypos()
{

	int data;
	newnode = (NODE *)malloc(sizeof(NODE));
	printf("\nEnter data item : ");
	scanf("%d", &newnode->num);
	printf("\nEnter the value of the node after which you want to insert the data item : ");
	scanf("%d", &data);
	newnode = first;
	while (newnode->ptr != NULL && newnode->num != data)
	{
		newnode = newnode->ptr;
	}
	if (newnode->num == data)
	{
		temp->num = data;
		temp->ptr = newnode->ptr;
		newnode->ptr = temp;
	}
	else
		printf("Value %d not found.", data);
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
	while (ch != 5)
	{
		printf("\nYour choices - ");
		printf("\n1 - Insert data item in the beginning.");
		printf("\n2 - Insert data item at the end.");
		printf("\n3 - Insert data item at any position.");
		printf("\n4 - Diplay linked list.");
		printf("\n5 - Exit.");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			insert_first();
			break;
		case 2:
			insert_last();
			break;
		case 3:
			insert_anypos();
			break;
		case 4:
			display();
			break;
		case 5:
			break;
		default:
			printf("Wrong Input\n");
		}
	}
}