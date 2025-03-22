/* Write a program in C to insert a new node at the beginning of a 
Singly Linked List.*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createnode(int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}

void displaylist(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}

void insertatbeg(struct node **head,int value){
    struct node *newnode=createnode(value);
    newnode->next=*head;
    *head=newnode;
}

int main(){
    struct node *head=createnode(1);
    struct node *second=createnode(2);
    struct node *end=createnode(3);
    head->next=second;
    second->next=end;
    end->next=NULL;
    printf("List Before Insertion : ");
    displaylist(head);
    insertatbeg(&head,0);
    insertatbeg(&head,-1);
    printf("\nList After Insertion at beginning : ");
    displaylist(head);
    return 0;
}                         