#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void CLLTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);

    printf("(Back to Head)\n\n");
}
struct node *deletionAtEnd(struct node *head)
{
    struct node *q = head->next;
    struct node *ptr = head;
    while (q->next != head)
    {
        q=q->next;
        ptr = ptr->next;
    }
    ptr->next = head;
    free(q);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->next = head;

    printf("\nCircular Linked List Before Deletion :\t");
    CLLTraversal(head);

    head = deletionAtEnd(head);
    head = deletionAtEnd(head);

    printf("\nCircular Linked List After Deletion :\t");
    CLLTraversal(head);
}