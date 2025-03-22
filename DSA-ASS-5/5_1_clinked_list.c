/* Write a C program to implement a circular linked list with the following operations :--

a) Insert an element at a specific position specified by the user. (consider pos of head as 0)
b) Insert an element at the beginning of the list (consider head as beginning)
c) Insert an element at the end of the list. (consider last element as end)
d) Delete an element from a specific position specified by the user.
e) Delete the first element from the list.
f) Delete the last element from the list.

Note: The program should continuously prompt the user to select an
operation and execute it until the user enters 0 to terminate. */

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL;

void insertAtPosition(int data, int position){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    if(head==NULL){
        if(position==0){
            newnode->next=newnode;
            head=newnode;
        } 
        else{
            printf("Invalid position!\n");
            free(newnode);
        }
        return;
    }
    node *temp=head;
    if(position==0){
        while (temp->next!=head){
            temp=temp->next;
        }
        newnode->next=head;
        temp->next=newnode;
        head=newnode;
        return;
    }
    for(int i=0;i<position-1&&temp->next!=head;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void insertAtBeginning(int data){
    insertAtPosition(data, 0);
}

void insertAtEnd(int data){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
        return;
    }
    node *temp=head;
    while (temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void deleteFirst();
void deleteLast();

void deleteAtPosition(int position){
    if(head==NULL){
        printf("List is empty!\n");
        return;
    }
    if(position==0){
        deleteFirst();
        return;
    }
    node *temp=head, *prev=NULL;
    for(int i=0;i<position&&temp->next!=head;i++){
        prev=temp;
        temp=temp->next;
    }
    if(temp==head){
        printf("Invalid position!\n");
        return;
    }
    prev->next=temp->next;
    free(temp);
}

void deleteFirst(){
    if(head==NULL){
        printf("List is empty!\n");
        return;
    }
    node *temp=head;
    if(head->next==head){
        head=NULL;
        free(temp);
        return;
    }
    node *last=head;
    while (last->next!=head) last=last->next;
    head=head->next;
    last->next=head;
    free(temp);
}

void deleteLast(){
    if(head==NULL){
        printf("List is empty!\n");
        return;
    }
    node *temp=head, *prev=NULL;
    if(head->next==head){
        free(head);
        head=NULL;
        return;
    }
    while (temp->next!=head){
        prev=temp;
        temp=temp->next;
    }
    prev->next=head;
    free(temp);
}

void display(){
    if(head==NULL){
        printf("List is empty!\n");
        return;
    }
    node *temp=head;
    printf("Circular Linked List: ");
    do{
        printf("%d ", temp->data);
        temp=temp->next;
    } while (temp!=head);
    printf("\n");
}

int main(){
    int choice, data, position;
    while (1){
        printf("\nSelect an operation :--\n");
        printf("1. Insert at a specific position\n");
        printf("2. Insert at the beginning\n");
        printf("3. Insert at the end\n");
        printf("4. Delete from a specific position\n");
        printf("5. Delete first element\n");
        printf("6. Delete last element\n");
        printf("7. Display list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &position);
                insertAtPosition(data, position);
                display();
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                display();
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(data);
                display();
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(position);
                display();
                break;
            case 5:
                deleteFirst();
                display();
                break;
            case 6:
                deleteLast();
                display();
                break;
            case 7:
                display();
                break;
            case 0:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
