#include <stdio.h>
#define size 10

int stack[size], top = -1;

int isEmpty(int top)
{
    return top == -1;
}
int isFull(int top)
{
    return top == size - 1;
}

int push(int value)
{
    if (isFull(top))
    {
        printf("\nStack Overflow! can't Push %d in Stack \n", value);
    }
    else
    {
        top++;
        stack[top] = value;
        printf("\n%d is Pushed in stack\n", value);
    }
    return 0;
}

int pop()
{
    if (isEmpty(top))
    {
        printf("\nStack Is Underflow! can't Pop from the stack\n");
    }
    else
    {
        int value = stack[top];
        top--;
        printf("\n%d is Popped from stack\n", value);
        return value;
    }
}

int peek(int index)
{
    if (isEmpty(top))
    {
        printf("\nStack Is Empty! can't Peek from the stack\n");
    }
    else
    {
        int value = stack[index];
        printf("\n%d is Peeked from the stack\n",value);
        return value;

    }
}

void display()
{
    if (isEmpty(top))
    {
        printf("\nStack is Empty!\n");
    }
    else
    {
        printf("\nStack Elements are .....\n");
        for (int i = 0; i <= top; i++)
        // for(int i=top;i>=0;i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

void main()
{
    system("cls");
    display();
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    display();
    pop();
    peek(top);
    peek(top-1);
    display();
}