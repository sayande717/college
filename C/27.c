#include <stdio.h>
#include <stdlib.h>
typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
} node;
void create(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void main()
{
    int choice, key;
    char ans = 'N';
    node *new_node, *root, *tmp, *parent, *get_node;
    root = NULL;
    printf("\nProgram for Binary SEarch Tree");
    do
    {
        printf("\n1. Create");
        printf("\n1. Inorder");
        printf("\n3. Preorder");
        printf("\n4. Postorder");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            do
            {
                new_node = get_node;
                printf("\nEnter the element: ");
                scanf("%d", &new_node->data);
                if (root == NULL)
                    root = new_node;
                else
                    create(root, new_node);
                printf("\nDo you want to enter more elements (y/n)?");
                scanf("%c", &ans);
            } while (ans == 'y');
            break;
        case 2:
            if (root == NULL)
                printf("\nTree is not created");
            else
            {
                printf("The inorder display: ");
                inorder(root);
            }
            break;
        case 3:
            if (root == NULL)
                printf("\nTree is not created");
            else
            {
                printf("\nThe preorder display: ");
                preorder(root);
            }
            break;
        case 4:
            if (root == NULL)
                printf("\nTree is not created");
            else
            {
                printf("\nThe postorder display: ");
                postorder(root);
            }
            break;
        case 5:
            printf("\nYou have chosen to exit");
            exit(0);
            break;
        default:
            printf("\nInvalid input");
            break;
        }
    } while (choice != 5);
}
node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}
void create(node *root, node *new_node)
{
    if (new_node->data < root->data)
    {
        if (root->lchild == NULL)
            root->lchild = new_node;
        else
            create(root->lchild, new_node);
    }
    if (new_node->data > root->data)
    {
        if (root->rchild == NULL)
            root->rchild = new_node;
        else
            create(root->rchild, new_node);
    }
}
void inorder(node *temp) //For inorder
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        printf("\t%d\t", temp->data);
        inorder(temp->rchild);
    }
}
void preorder(node *temp) //For preorder
{
    if (temp != NULL)
    {
        printf("\t%d\t", temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}
void postorder(node *temp) //For postorder
{
    if (temp != NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("\t%d\t", temp->data);
    }
}