/* Write a program in C to copy the elements of the array to a singly
linked list.*/

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

struct node *copy(int arr[],int length){
    if(length==0){
        return NULL;
    }    
    struct node *head=createnode(arr[0]);
    struct node *current=head;
    for(int i=1;i<length;i++){
        current->next=createnode(arr[i]);
        current=current->next;
    }    
    current->next=NULL;
    return head;
}   
        

int main(){
    int length;
    printf("Enter length of array : ");
    scanf("%d",&length);
    int arr[length];
    printf("Enter %d numbers : ",length);
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    struct node *head=copy(arr,length);    
    printf("\nLinked List as a copy of the given array :--\n ");
    displaylist(head);
    return 0;
}                         