/* Write a C/C++ program to implement doubly linked list with the following function :--

(i) insertAtFirst(&head, new_data): This function should insert the new data/element at the beginning of the linked list.

(ii) insertAtEnd(&head, new_data): This function should insert the new data/element at the end of the linked list

(iii) insertAtMiddle(&head, new_data): This function should insert the new data/element at the middle of the linked list

(iv) insertAfterNode(&head, given_node, new_data): This function should insert the new data/element after the given node in the linked list.

Example: Suppose, you want to insert 60 after node 40 in the given linked list :-- 
10 <- -> 20 <- -> 30 <- -> 40 <- -> 50 
the updated linked list will be :--
10 <- -> 20 <- -> 30 <- -> 40 <- -> 60 <- -> 50

(v) display(&head): This function should display the content of the linked list

Note:--
1. If the linked list has 4 elements, let’s say 10, 20, 30, and 40, the linked list
should be displayed in the following format 10 <- -> 20 <- -> 30 <- -> 40
2. After each operation, you should display the content of the linked list. */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next,*prev;
};

struct node *createnode(int value){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

int getlen(struct node *head){
    int n=0;
    struct node *temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}

void display(struct node *head){
    struct node *temp=head;
    while(temp->next!=NULL){
        printf("%d <- -> ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

void insertAtFirst(struct node **head,int new_data){
    struct node *newnode=createnode(new_data);
    newnode->next=*head;
    (*head)->prev=newnode;
    *head=newnode;
}

void insertAtEnd(struct node **head,int new_data){
    struct node *newnode=createnode(new_data);
    struct node *end=*head;
    while(end->next!=NULL){
        end=end->next;
    }
    end->next=newnode;
    newnode->prev=end;
    end=newnode;
}
    
void insertAtMiddle(struct node **head,int new_data){
    struct node *newnode=createnode(new_data);
    struct node *mid=*head;
    int n=getlen(*head);
    for(int i=1;i<n/2;i++){
        mid=mid->next;
    }    
    struct node *midplus=mid->next;
    mid->next=newnode;
    newnode->prev=mid;
    newnode->next=midplus;
    midplus->prev=newnode;
}
    
void insertAfterNode(struct node **head,struct node **given,int new_data){
    struct node *newnode=createnode(new_data);
    struct node *givenplus=(*given)->next;
    (*given)->next=newnode;
    newnode->prev=*given;
    newnode->next=givenplus;
    givenplus->prev=newnode;
}
        
int main(){
    // creating a doubly linked list for testing
    struct node *head=createnode(1);
    struct node *second=createnode(2);
    struct node *third=createnode(3);
    struct node *end=createnode(4);
    head->prev=NULL;
    head->next=second;
    second->prev=head;
    second->next=third;     
    third->prev=second;
    third->next=end; 
    end->prev=third;
    end->next=NULL; 
    printf("\nLinked list before any insertion :--\n");
    display(head);
    insertAtFirst(&head,0); // inserted 0 at beginning 
    printf("\nLinked list after inserting 0 at beginning :--\n");
    display(head);
    insertAtEnd(&head,5); // inserted 5 at end 
    printf("\nLinked list after inserting 5 at end :--\n");
    display(head);
    insertAtMiddle(&head,99); // inserted -1 at middle 
    printf("\nLinked list after inserting 99 at middle :--\n");
    display(head);
    insertAfterNode(&head,&second,69); // inserted 69 after node containing value=2
    printf("\nLinked list after inserting 69 after node containing value=2 :--\n");
    display(head);
    return 0;
}    
    
    