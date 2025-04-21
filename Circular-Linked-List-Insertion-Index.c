#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void print_Cll(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("(Back to Head)\n\n");
}

struct Node *insertIndex(struct Node *head, int data, int index)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *ptr = head;
    struct Node *p = ptr->next;

    if (index == 0 || index > 5)
    {
        printf("Enter Correct Index\n\n");
        free(newNode);
        return head;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
            p = p->next;
        }

        ptr->next = newNode;
        newNode->next = p;
        return head;
    }
}

void main()
{
    struct Node *Head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Fifth = (struct Node *)malloc(sizeof(struct Node));

    Head->data = 7;
    Head->next = Second;

    Second->data = 9;
    Second->next = Third;

    Third->data = 11;
    Third->next = Fourth;

    Fourth->data = 13;
    Fourth->next = Fifth;

    Fifth->data = 15;
    Fifth->next = Head;

    printf("\nCircular Linked List Before Insertion \t");

    print_Cll(Head);

    Head = insertIndex(Head, 98, 6);

    printf("Circular Linked List Before Insertion \t");

    print_Cll(Head);
}
