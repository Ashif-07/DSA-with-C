// #include <stdio.h>
// #include <stdlib.h>

// struct stack
// {
//     int top;
//     int size;
//     int *arr;
// };

// int isFull(struct stack *ptr)
// {
//     //if (ptr->top == ptr->size - 1)
//         //return 1;
//         return ptr->top == ptr->size - 1;
//     //else
//       //  return 0;
// }

// int isEmpty(struct stack *ptr)
// {
//     // if (ptr->top == -1)
//         return ptr->top == -1;
//     // else
//     //     return 0;
// }

// int pop(struct stack *q) // out
// {
//     if (isEmpty(q))
//     {
//         printf("Stack is Underflow !  Can't pop from the stack\n");
        
//     }
//     else
//     {
//         int val = q->arr[q->top];
//         q->top--;
//         return val;
//     }
// }

// void push(struct stack *ptr, int value) // in
// {
//     if (isFull(ptr))
//     {
//         printf("Stack Overflow! Can't push %d from the Stack \n", value);
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = value;
//     }
// }

// int main()
// {

//     struct stack *s = (struct stack *)malloc(sizeof(struct stack));

//     s->size = 5;
//     s->top = -1;
//     s->arr = (int *)malloc(s->size * (sizeof(int)));

//     system("cls");

//     push(s, 7);
//     push(s, 9);
//     push(s, 11);
//     push(s, 13);
//     push(s, 15);
    

//     printf("\n\n\nPupped from Stack \t %d \n ",pop(s));
//     printf("Pupped from Stack \t %d \n ",pop(s));
//     printf("Pupped from Stack \t %d \n ",pop(s));
//     printf("Pupped from Stack \t %d \n ",pop(s));
//     printf("Pupped from Stack \t %d \n ",pop(s));
//     printf("Pupped from Stack \t %d \n ",pop(s));
    

//     printf(" Is Full %d \n", isFull(s));
//     printf(" Is Empty %d ", isEmpty(s));
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int isFull(struct stack *ptr)
{
    return ptr->top == ptr->size - 1;
}

int isEmpty(struct stack *ptr)
{
    return ptr->top == -1;
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot Push %d in Stack\n", val);
    }
    else
    {

        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{    //int val;
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot Pop in Stack\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));

    sp->top = -1;
    sp->size = 5;
    sp->arr = (int *)malloc(sp->size * (sizeof(int)));
    system("cls");
    printf("Is Empty %d \n",isEmpty(sp));
    printf("Is Full %d \n",isFull(sp));
    push(sp, 5);
    push(sp, 4);
    push(sp, 3);
    push(sp, 2);
    push(sp, 1);
    push(sp, 6);
    printf("Is Empty %d \n",isEmpty(sp));
    printf("Is Full %d \n",isFull(sp));
    printf("%d \n",pop(sp));
    printf("%d \n",pop(sp));
    printf("%d \n",pop(sp));
    printf("%d \n",pop(sp));
    printf("%d \n",pop(sp));
    printf("%d \n",pop(sp));
    
    printf("Is Empty %d \n",isEmpty(sp));
    printf("Is Full %d \n",isFull(sp));
    
}