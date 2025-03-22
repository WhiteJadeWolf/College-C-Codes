/* Implement a queue using a linked list with two pointers: rear and front. 
Elements can only be inserted via the front pointer and deleted via the rear pointer. 
The queue has the following basic operations :--

• enqueue() – Insert an element in the queue.
• dequeue() – Remove the element from the queue.
• peek() – Return the element at the rear node of the queue
• lenqueue() – Return the length of the queue.
• isempty() – Checks if the queue is empty. */

#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data;
    struct queue *next, *prev;
};

struct queue *createnode(int x){
    struct queue *newnode = (struct queue *)malloc(sizeof(struct queue));
    newnode->data = x;
    newnode-> next =NULL;
    newnode->prev =NULL;
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

void enqueue(int x){
    if(c == 0){
        rear = createnode(x);
        front = rear;
        c++;
        return;
    }
    struct queue *newnode = createnode(x);
    newnode->next = rear;
    rear->prev = newnode;
    rear = newnode;
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
    printf("Queue : ");
    while(temp != NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    int ch;
    while(1){
        printf("\nEnter Your Choice :--\n1 - Insert an element in the queue\n2 - Remove Element from the queue\n3 - Display the element at the front of the queue\n4 - Check the length of queue\n5 - Checks if the queue is empty\n6 - Display the queue\n0 - Exit.\nChoice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : int n;
                     printf("Enter the number you want to insert : ");
                     scanf("%d",&n);
                     enqueue(n);
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
            case 0 : exit(0);
                     break;
            default : printf("Wrong Input! Please Try Again.\n");
        }
    }
    return 0;
}