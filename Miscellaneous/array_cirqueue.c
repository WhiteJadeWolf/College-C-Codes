/* Implement Circular Queue using Array */

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int arr[MAX];
int front = -1;
int rear = -1;

int isfull(){
    if(rear == (front - 1) % MAX){
        return 1;
    }
    return 0;
}

int isempty(){
    if(rear == -1 && front == -1){
        return 1;
    }
    return 0;
}

void enqueue(int val){
    if(isempty()){
        front = 0;
        rear = 0;
        arr[rear] = val;
        return;
    }
    if(isfull()){
        printf("ERROR : Queue Overflow.\n");
        return;
    }
    rear = (rear + 1) % MAX;
    arr[rear] = val;
    printf("%d successfully enqueued.\n",val);
}

void dequeue(){
    if(isempty()){
        printf("ERROR : Queue Underflow.\n");
        return;
    }
    if(front == 0 && rear == 0){
        printf("%d successfully dequeued.\n",arr[front]);
        rear = -1;
        front = -1;
        return;
    }
    printf("%d successfully dequeued.\n",arr[front]);
    front = (front + 1) % MAX;
}

int peek(){
    if(isempty()){
        printf("Queue is Empty.\n");
        return -1;
    }
    return arr[front];
}

void display(){
    if(isempty()){
        printf("Queue is Empty.\n");
        return;
    }
    for(int _ = front; _ % MAX <= rear; _++){
        printf("%d <- ",arr[_]);
    }
    printf("\n");
}

int main(){
    int choice;
    while(1){
        printf("\nEnter your choice :--\n1 - Enqueue\n2 - Dequeue\n3 - Peek\n4 - Check if queue is empty\n5 - Check if queue if full\n6 - Display the queue\n7 - Exit\nChoice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                int val;
                printf("Enter the value : ");
                scanf("%d",&val);
                enqueue(val);
                break;
            }
            case 2: dequeue();
                    break;
            case 3: printf("Element in front of queue : %d\n",peek());
                    break;
            case 4: isempty() ? printf("Queue is Empty\n") : printf("Queue is NOT empty\n");
                    break;
            case 5: isfull() ? printf("Queue if Full\n") : printf("Queue is NOT full\n");
                    break;
            case 6: printf("Queue : ");
                    display();
                    break;
            case 7: exit(0);
                    break;
            default: printf("INVALID INPUT - TRY AGAIN.\n");
        }
    }
    return 0;
}
