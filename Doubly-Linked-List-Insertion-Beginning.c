#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void forwardPrint(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n\n");
}

struct node *insertBeg(struct node *head, int data)
{
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->data=data;
    head->prev=newNode;
    newNode->next=head;
    return newNode;
}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    struct node *sixth = (struct node *)malloc(sizeof(struct node));
    struct node *seventh = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 3;
    head->next = second;

    second->prev = head;
    second->data = 5;
    second->next = third;

    third->prev = second;
    third->data = 7;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 9;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 11;
    fifth->next = sixth;

    sixth->prev=fifth;
    sixth->data=13;
    sixth->next=seventh;

    seventh->prev=sixth;
    seventh->data=15;
    seventh->next=NULL;

    forwardPrint(head);
    
    head = insertBeg(head, 1);

    forwardPrint(head);
}