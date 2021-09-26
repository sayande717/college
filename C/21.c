#include<stdio.h>
struct stack
{
    int top;
    int array[50];
    int size;
};
void push(struct stack*s,int n)
{
    if(s->top==s->size-1)
    {
        printf("Stack Overflow.");
    }
    s->array[++(s->top)]=n;
    printf("Element pushed succesfully.");
}
int pop(struct stack*s)
{
    if (s->top==-1)
    {
        
        return -1;
    }
    else
    {
        return s->array[s->top--];
    }
}
void display(struct stack*s)
{
    int count;
    if(s->top==-1)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("Elements in the stack : \n");
        for (count = s->top; count >= 0; count--)
        {
            printf("\t%d", s->array[count]);
        }
    }
}
void main()
{
    struct stack s;
    int choice,number;
    s.top=-1;
    printf("Enter size of stack (size < 50) : ");
    scanf("%d", &s.size);
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
            printf("Enter element to push : ");
            scanf("%d",&number);
            push(&s,number);
            break;
        case 2:
            number=pop(&s);
            if(number==-1)
            {  
                printf("Stack Underflow.");
            }
            else
            {
                printf("Popped element : %d",number);
            }
            break;
        case 3:
            display(&s);
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