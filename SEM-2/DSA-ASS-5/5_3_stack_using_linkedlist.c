/* Write a C/C++ code to implement stack with all the operations defined in
Q2 using Linked list. */

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

typedef struct stack{
    node *top;
}STACK;

void create(STACK *s){
    s->top=NULL;
}

int isEmpty(STACK *s){
    return s->top == NULL;
}

void push(STACK *s,int value){
    node *newnode=(node*)malloc(sizeof(node));
    if(!newnode){
        printf("Heap overflow! Cannot push %d\n",value);
        return;
    }
    newnode->data=value;
    newnode->next=s->top;
    s->top=newnode;
    printf("Pushed %d onto stack\n",value);
}

int pop(STACK *s){
    if(isEmpty(s)){
        printf("Stack underflow! Cannot pop\n");
        return -1;
    }
    node *temp=s->top;
    int poppedValue=temp->data;
    s->top=s->top->next;
    free(temp);
    return poppedValue;
}

int peek(STACK *s){
    if(isEmpty(s)){
        printf("Stack is empty! No top element\n");
        return -1;
    }
    return s->top->data;
}

int main(){
    STACK s;
    // testing
    create(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    printf("Top element is %d\n",peek(&s));
    printf("Popped %d from stack\n",pop(&s));
    printf("Popped %d from stack\n",pop(&s));
    printf("Stack is empty: %s\n",isEmpty(&s) ? "Yes" : "No");
    return 0;
}
