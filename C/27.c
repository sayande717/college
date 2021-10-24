#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    node *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
    while (choice)
    {
        head = (node *)malloc(sizeof(node));
        printf("Enter data item.\n");
        scanf("%d", &head->num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;
        }
        else
            first = temp = head;
    }
    fflush(stdin);
    printf("Do you want to continue (0 or 1)?\n");
    scanf("%d", &choice);
    temp->ptr = 0;
    temp = first;
    printf("The linked list is: ");
    while (temp != 0)
    {
        printf("%d", temp->num);
        count++;
        temp = temp->ptr;
    }
    printf("Null\n");
}