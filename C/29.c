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
node *search(node *, int, node **);

void main()
{
    int choice;
    char ans = 'N';
    int key;
    node *new_node, *root, *tmp, *parent;
    node *get_node;
    root = NULL;
    printf("\nProgram for Binary Search Trees");
    do
    {
        printf("\n1. Create");
        printf("\n2. Inorder");
        printf("\n3. Preorder");
        printf("\n4. Postorder");
        printf("\n5. Search");
        printf("\n6. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            do
            {
                new_node = get_node;
                printf("\nEnter the element :");
                scanf("%d", &new_node->data);
                if (root == NULL)
                    root = new_node;
                else
                    create(root, new_node);
                printf("\nDo you want to enter more elements (y/n) ?");
                scanf("%c", &ans);
            } while (ans == 'y');
            break;
        case 2:
            if (root == NULL)
                printf("\nTree is not created");
            else
            {
                printf("The inorder display :");
                inorder(root);
            }
            break;
        case 3:
            if (root == NULL)
                printf("\nTree is not created");
            else
            {
                printf("\nThe preorder display");
                preorder(root);
            }
            break;
        case 4:
            if (root == NULL)
                printf("\nTree is not created");
            else
            {
                printf("\nThe postorder display :");
                postorder(root);
            }
            break;
        case 5:
            printf("\nEnter element to be searched");
            scanf("%d", &key);
            tmp = search(root, key, &parent);
            printf("\nParent of node %d is %d", tmp->data, parent->data);
            break;
        case 6:
            printf("\nYou have chosen to exit");
            exit(0);
            break;
        }
    } while (choice != 4);
}
//Get new node
node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}

//Creating a Binary search tree.
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
        if (root->lchild == NULL)
            root->rchild = new_node;
        else
            create(root->rchild, new_node);
    }
}

//For searching the Binary Search tree.
node *search(node *root, int key, node **parent)
{
    node *temp;
    temp = root;
    while (temp != NULL)
    {
        if (temp->data > key)
        {
            printf("\nThe element %d is present", temp->data);
            return temp;
        }
        *parent = temp;
        if (temp->data > key)
            temp = temp->lchild;
        else
            temp = temp->rchild;
    }
    return NULL;
}
//For inorder
void inorder(node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        printf("\t%d\t", temp->data);
        inorder(temp->rchild);
    }
}

//For preorder
void preorder(node *temp)
{
    if (temp != NULL)
    {
        printf("\t%d\t", temp->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}

//For postorder
void postorder(node *temp)
{
    if (temp != NULL)
    {
        postorder(temp->lchild);
        postorder(temp->rchild);
        printf("\t%d\t", temp->data);
    }
}
