/* Given an unsorted linked list of n nodes, remove duplicates from the list. */

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

void removeduplicate(struct node **head){
    struct node* current=*head;
    while(current!=NULL){
        struct node* runner=current->next;
        struct node* prevrunner=current;
        while(runner!=NULL){
            if(runner->data==current->data){
                prevrunner->next=runner->next;
                free(runner);
                runner=prevrunner->next;
            } 
            else{
                prevrunner=runner;
                runner=runner->next;
            }
        }
        current=current->next;
    }
}

int main(){
    int n;
    printf("Enter length of linked list : ");
    scanf("%d",&n);
    struct node *head=createlinkedlist(n);
    printf("Linked list initially :--\n");
    displaylist(head);
    removeduplicate (&head);
    printf("\nLinked list after removing duplicate elements :--\n");
    displaylist(head);
    return 0;
}    