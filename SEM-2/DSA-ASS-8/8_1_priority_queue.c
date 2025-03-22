/* Implement a priority queue using a linked list. The queue has the following basic operations:
● enqueue() – Insert an element in the queue.
● dequeue() – Remove the element from the queue.
● peek() – Return the element at the front node of the queue
● isfull() – Validates if the queue is full or not.
● isempty() – Checks if the queue is empty. */

#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data, pri;
    struct queue *next, *prev;
};

struct queue *createnode(int x, int prior){
    struct queue *newnode = (struct queue *)malloc(sizeof(struct queue));
    newnode->data = x;
    newnode-> next =NULL;
    newnode->prev =NULL;
    newnode->pri = prior;
    return newnode;
}

struct queue *front = NULL;
struct queue *rear = NULL;
int c = 0; // no. of queue elements

int isempty(){
    if(rear == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int x, int prior){
    if(isempty()){
        rear = createnode(x, prior);
        front = rear;
        c++;
        return;
    }
    struct queue *newnode = createnode(x, prior);
    if(prior < front->pri){  // priority of node is greater than priority of front node (priority increases in descending order)
        front->next = newnode;
        newnode->prev = front;
        front = newnode;
        c++;
        return;
    }
    if(rear->pri <= newnode->pri){
        rear->prev = newnode;
        newnode->next = rear;
        rear = newnode;
        c++;
        return;
    }
    struct queue *pivot = rear;
    while(pivot->next != NULL && prior < pivot->next->pri) {
        pivot = pivot->next;
    }
    newnode->next = pivot->next;
    pivot->next->prev = newnode;
    pivot->next = newnode;
    newnode->prev = pivot;
    c++;
}

void dequeue(){
    if(isempty()){
        printf("ERROR : Queue Underflow.");
        return;
    }
    struct queue *temp = front;
    front = front->prev;
    front->next = NULL;
    free(temp);
    c--;
}

int peek(){
    if(isempty()){
        printf("ERROR : Queue is Empty");
        return -1;
    }
    else{
        return front->data;
    }
}

int lenqueue(){
    return c;
}

void display(){
    struct queue *temp = rear;
    printf("Queue (data,priority) : ");
    while(temp != NULL){
        printf("(%d, %d)  ",temp->data,temp->pri);
        temp = temp->next;
    }
    printf("\n");
}

void isfull(){
    printf("Linked List implementation of queue is never full.\n");
}

int main(){
    int ch;
    while(1){
        printf("\nEnter Your Choice :--\n1 - Insert an element in the queue\n2 - Remove Element from the queue\n3 - Display the element at the front of the queue\n4 - Check the length of queue\n5 - Checks if the queue is empty\n6 - Display the queue\n7 - Check whether the queue is full or not\n0 - Exit.\nChoice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : int n, pri;
                     printf("Enter the number (with priority) you want to insert : ");
                     scanf("%d %d",&n,&pri);
                     enqueue(n, pri);
                     break;
            case 2 : dequeue();
                     break;
            case 3 : printf("Element in the front of the queue : %d\n",peek());
                     break;
            case 4 : printf("Length of queue : %d\n",lenqueue());
                     break;
            case 5 : if(isempty()){
                        printf("Queue is Empty\n");
                     }
                     else{
                        printf("Queue is NOT empty\n");
                     }
                     break;
            case 6 : display();
                     break;
            case 7 : isfull();
                     break;
            case 0 : exit(0);
                     break;
            default : printf("Wrong Input! Please Try Again.\n");
        }
    }
    return 0;
}