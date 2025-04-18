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
struct node *deletionByValue(struct node *head, int value)
{
    struct node *q = head->next;
    struct node *ptr = head;
    while (q->data != value)
    {
        if (q->next == head)
        {
            break;
        }
        else
        {
            q = q->next;
            ptr = ptr->next;
        }
    }
    if (q->data == value)
    {
        ptr->next = q->next;
        free(q);
    }
    else
    {
        printf("%d is Not Available\n\n", value);
    }
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

    // it is not work on first node value.
    printf("\nCircular Linked List Before Deletion :\t");
    CLLTraversal(head);

     head = deletionByValue(head, 7);
    head = deletionByValue(head, 777);
     head = deletionByValue(head, 77);

    printf("\nCircular Linked List After Deletion :\t");
    CLLTraversal(head);
}