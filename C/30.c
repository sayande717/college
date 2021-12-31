#include <stdio.h>
#include <stdlib.h>
struct ll
{
	int data;
	struct ll *link;
};
typedef struct ll node;
node *x, *y, *t;
void create();
void reverse();
void display();

void main()
{
	int n, ch = 1;
	while (ch)
	{
		printf("\n Press 1 for create \n Press 2 for display\n Press 3 for reverse \n Press 4 for exit program\n");
		printf("Enter your choice\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			reverse();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Wrong Input");
		}
	}
}
void create()
{
	int ch = 1;
	x = NULL;
	while (ch)
	{
		printf("Enter the data: ");
		y = (node *)malloc(sizeof(node));
		scanf("%d", &y->data);
		if (x != NULL)
		{
			t->link = y;
			t = y;
		}
		else
		{
			x = y;
			t = y;
		}
		printf("Do you want to continue?(0/1)\n");
		scanf("%d", &ch);
	}
	t->link = NULL;
}
void reverse()
{
	node *z;
	y = x->link;
	x->link = NULL;
	z = y->link;
	while (y != NULL)
	{
		y->link = x;
		x = y;
		y = z;
		z = z->link;
	}
}

void display()
{
	node *z;
	z = x;
	while (z != NULL)
	{
		printf("%d->", z->data);
		z = z->link;
	}
	printf("NULL");
}
