/* Write a program in C to traverse in a singly linked list.*/

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

void traverselist(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d | %u ,",temp->data,temp->next);
        temp=temp->next;
    }
}

int main(){
    struct node *head=createnode(1);
    struct node *second=createnode(2);
    struct node *end=createnode(3);
    head->next=second;
    second->next=end;
    end->next=NULL;
    printf("Traversing the linked list...\nNodes of the linked list : ");
    traverselist(head);
    return 0;
}                         