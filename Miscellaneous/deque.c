/* Implement Queue using Deque */

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next, *prev;
};

struct node *createnode(int val){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

struct node *rear = NULL;
struct node *front = NULL;

int isempty(){
    if(!rear){
        return 1;
    }
    return 0;
}

void enqueuerear(int val){
    struct node *newnode = createnode(val);
    if(isempty()){
        rear = newnode;
        front = newnode;
        printf("%d enqueued at rear successfully.\n",val);
        return;
    }
    newnode->next = rear;
    rear->prev = newnode;
    rear = newnode;
    printf("%d enqueued at rear successfully.\n",val);
}

void enqueuefront(int val){
    struct node *newnode = createnode(val);
    if(isempty()){
        rear = newnode;
        front = newnode;
        printf("%d enqueued at front successfully.\n",val);
        return;
    }
    front->next = newnode;
    newnode->prev = front;
    front = newnode;
    printf("%d enqueued at front successfully.\n",val);
}

void dequeuerear(){
    if(isempty()){
        printf("ERROR : Deque Underflow.\n");
        return;
    }
    struct node *temp = rear;
    rear = rear->next;
    rear->prev = NULL;
    printf("%d dequeued successfully from rear.\n",temp->data);
    free(temp);
}

void dequeuefront(){
    if(isempty()){
        printf("ERROR : Deque Underflow.\n");
        return;
    }
    struct node *temp = front;
    front = front->prev;
    front->next = NULL;
    printf("%d dequeued successfully from front.\n",temp->data);
    free(temp);
}

int peekrear(){
    if(isempty()){
        printf("Deque is Empty.\n");
        return -1;
    }
    return rear->data;
}

int peekfront(){
    if(isempty()){
        printf("Deque is Empty.\n");
        return -1;
    }
    return front->data;
}

void display(){
    if(isempty()){
        printf("Deque is Empty.\n");
        return;
    }
    struct node *current = front;
    while(current){
        printf("%d <- ",current->data);
        current = current->prev;
    }
    printf("\n");
}

int main(){
    int choice;
    while(1){
        printf("\nEnter your choice :--\n1 - Enqueue from Rear\n2 - Enqueue from Front\n3 - Dequeue from Rear\n4 - Dequeue from Front\n5 - Peek from Rear\n6 - Peek from Front\n7 - Check if Deque is Empty\n8 - Display the Deque\n9 - Exit\nChoice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                int val;
                printf("Enter the value : ");
                scanf("%d",&val);
                enqueuerear(val);
                break;
            }
            case 2:
            {
                int val;
                printf("Enter the value : ");
                scanf("%d",&val);
                enqueuefront(val);
                break;
            }
            case 3: dequeuerear();
                    break;
            case 4: dequeuefront();
                    break;
            case 5: printf("Element in rear of deque : %d\n",peekrear());
                    break;
            case 6: printf("Element in front of deque : %d\n",peekfront());
                    break;
            case 7: isempty() ? printf("Deque is Empty\n") : printf("Deque is NOT empty\n");
                    break;
            case 8: printf("Deque : ");
                    display();
                    break;
            case 9: exit(0);
                    break;
            default: printf("INVALID INPUT - TRY AGAIN.\n");
        }
    }
    return 0;
}