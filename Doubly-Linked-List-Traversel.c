#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *prev;
    struct node*next;
};

void printForward(struct node* head){
   struct node*ptr=head;
    printf("\nForward Traversal: \t");
   
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n\n");
}

void printBackword(struct node* end){
    struct node*ptr=end;
    printf("Backward Traversal: \t");
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->prev;
    }
    printf("\n\n");
}


int main(){

    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    struct node *fifth=(struct node*)malloc(sizeof(struct node));

    head->prev=NULL;
    head->data=7;
    head->next=second;

    second->prev=head;
    second->data=9;
    second->next=third;

    third->prev=second;
    third->data=11;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=13;
    fourth->next=fifth;

    fifth->prev=fourth;
    fifth->data=15;
    fifth->next=NULL;

    printForward(head);
    printBackword(fifth);
   // print(fifth);
}