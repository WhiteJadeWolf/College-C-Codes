/* Given a linked list of n nodes and an integer k, write a function to rotate the linked list counter clockwise by k nodes. */

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

struct node *createlinkedlist(int n){
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    int value;
    for(int i=1;i<=n;i++){
        printf("Enter data for node %d : ",i);
        scanf("%d",&value);
        newnode=createnode(value);
        if(head==NULL){
            head=newnode;
        }
        else{
            temp->next=newnode;
        }
        temp=newnode;
    }
    return head;            
}

void displaylist(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d || %u, ",temp->data,temp->next);
        temp=temp->next;
    }
}

void rotate(struct node **head,int k){
    int length=1;
    struct node *current=*head;
    while(current->next!=NULL){
        length++;
        current=current->next;
    }
    struct node *end=current;
    struct node *split=*head;
    for(int i=1;i<k;i++){
        split=split->next;
    }
    struct node *newhead=split->next;
    split->next=NULL;
    end->next=*head;
    *head=newhead;
}    

int main(){
    int n;
    printf("Enter length of linked list : ");
    scanf("%d",&n);
    struct node *head=createlinkedlist(n);
    int k;
    printf("Enter k : ");
    scanf("%d",&k);
    printf("Linked list before rotating :--\n");
    displaylist(head);
    rotate(&head,k);
    printf("\nLinked list after rotating counterclockwise by %d :--\n",k);
    displaylist(head);
    return 0;
}    