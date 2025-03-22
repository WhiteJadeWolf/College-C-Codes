/* Given a singly linked list of n nodes, detect if it contains a loop or not. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createnode(int value){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}    

int detectloop(struct node *head){
    struct node *temp=head->next;
    while(temp!=NULL){
        if(temp==head){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}      

int main(){
    // test
    struct node *head=createnode(1);
    struct node *second=createnode(2);
    struct node *third=createnode(3);
    struct node *end=createnode(4);
    head->next=second;
    second->next=third;
    third->next=end;
    end->next=head; // looped linked list
    if(detectloop(head)){
        printf("Given linked list is looped\n");
    }
    else{
        printf("Given linked list is NOT looped\n");
    }    
    
    end->next=NULL; // Straight linked list
    if(detectloop(head)){
        printf("Given linked list is looped\n");
    }
    else{
        printf("Given linked list is NOT looped (straight)\n");
    }    
    return 0;
}    