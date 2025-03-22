/* Write a program in C to create and display a singly linked list. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *end = (struct node*)malloc(sizeof(struct node));  
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=end;
    end->data=3;
    end->next=NULL;
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d || %u, ",temp->data,temp->next);
        temp=temp->next;
    }
    return 0;
}          
    