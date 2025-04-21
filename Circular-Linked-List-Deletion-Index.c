#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printCLL(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%i -> ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("(Back to head)\n\n");
}

struct node *deletionIndex(struct node *head, int index)
{
    struct node *ptr = head;
    struct node *p = head->next;
    if (index == 0)
    {
        while (p->next != head)
        {
            p = p->next;
        }
        p->next = head->next;
        head = p->next;
        free(ptr);
        return head;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            ptr = ptr->next;
            p = p->next;
        }
        ptr->next = p->next;
        free(p);
        return head;
    }
}

void main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = fifth;

    fifth->data = 15;
    fifth->next = head;

    printf("\n\nCircular Linked List Before Deletion :\t");

    printCLL(head);

    head = deletionIndex(head, 3);
    head = deletionIndex(head, 2);

    printf("\n\nCircular Linked List After Deletion :\t");

    printCLL(head);
}