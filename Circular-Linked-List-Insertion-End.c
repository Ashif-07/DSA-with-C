#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printCll(struct Node *head)
{
    struct Node *ptr = head;
    
    do
    {
        printf("%i -> ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("(Back to Head)\n");
}

void insertEnd(struct Node *head, int num)
{
    struct Node *NewNode = (struct Node *)malloc(sizeof(struct Node));
    NewNode->data = num;
    struct Node *ptr = head->next;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = NewNode;
    NewNode->next = head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

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

    printf("Linked List\n");
    printCll(head);

    insertEnd(head, 17);
    insertEnd(head, 19);
    insertEnd(head, 21);

    printf("Linked List\n");
    printCll(head); 
}