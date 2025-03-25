#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void Display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n\n");
}

struct Node *insertAtIndex(struct Node *head, int info, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p= p->next;
        i++;
    }
    ptr->next = p->next;
    ptr->data = info;
    p->next=ptr;
    return head;
}

int main()
{
    int data, index;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate memory for Nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->next = NULL;
    printf("Enter Index where you want to insert :\t");
    scanf("%d", &index);
    printf("Enter data you want to insert :\t");
    scanf("%d", &data);
    printf("\n\nBefore Insertion Linked List :  ");
    Display(head);
   head=insertAtIndex(head, data,index);
    printf("\n\nAfter Insertion Linked List :  ");
    Display(head);
    return 0;
}