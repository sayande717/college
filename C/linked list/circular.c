#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *x, *y, *head;
/*Function to create a new circular linked list*/
void create()
{
    int c;
    x = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data:");
    scanf("%d", &x->data);
    x->link = x;
    head = x;
    printf("\n If you wish to continue press 1 otherwise 0:");
    scanf("%d", &c);
    while (c != 0)
    {
        y = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the data:");
        scanf("%d", &y->data);
        x->link = y;
        y->link = head;
        x = y;
        printf("\n If you wish to continue press 1 otherwise 0:");
        scanf("%d", &c);
    }
}

/*Function to display the elements in the list*/
void traverse()
{
    if (head == NULL)
        printf("\n List is empty");
    else
    {
        x = head;
        while (x->link != head)
        {
            printf("%d->", x->data);
            x = x->link;
        }
        printf("%d", x->data);
    }
}

void main()
{
    int ch;
    printf("\n 0. Exit \n 1.Creation \n 2.Display\n");

    while (1)
    {
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        default:
            exit(0);
        }
    }
}
