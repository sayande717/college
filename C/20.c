#include <stdio.h>
int stack[50], choice, top, size, pushvalue, count;
void push()
{
    if (top >= size - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter value to push : ");
        scanf("%d", &pushvalue);
        top++;
        stack[top] = pushvalue;
        printf("Element succesfully pushed.");
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped element : %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("Elements in the stack : \n");
        for (count = top; count >= 0; count--)
        {
            printf("\t%d", stack[count]);
        }
    }
    else
    {
        printf("Stack is empty.");
    }
}
void main()
{
    top = -1;
    printf("Enter size of stack (size < 50) : ");
    scanf("%d", &size);
    printf("\nOptions : \n");
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Display stack");
    printf("\n4. Exit");
    while (choice != 4)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Succesfully exited.\n");
            break;
        default:
            printf("Your choice is invalid.\n");
        }
    }
}