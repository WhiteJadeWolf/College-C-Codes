/* Write a C program that converts a singly linked list into an array and
returns it */

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
        printf("%d || %u, ",temp->data,temp->next);
        temp=temp->next;
    }
}

int listlength(struct node *head){
    struct node *temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}        

int *convert(struct node *head,int length){
    int *arr=(int *)malloc(length*(sizeof(int)));
    int index=0;
    struct node *temp=head;
    while(temp!=NULL){
        arr[index]=temp->data;
        temp=temp->next;
        index++;
    }
    return arr;
}
        
int main(){
    // Creating sample linked list
    struct node *head=createnode(1);
    struct node *second=createnode(2);
    struct node *third=createnode(3);
    struct node *fourth=createnode(4);
    struct node *end=createnode(5);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=end;
    end->next=NULL;
    printf("Linked List :--\n");
    displaylist(head);
    int length=listlength(head);
    int *arr=convert(head,length);
    printf("\nConverted Array :--\n");
    for(int i=0;i<length;i++){
        printf("%d  ",*(arr+i));
    }    
    return 0;
}                         