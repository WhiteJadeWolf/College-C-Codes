/* Write a C/C++ code to implement stack with following operations using
array.

a) create ()=Create a stack.
b) push()=Pushing (storing) an element on the stack
c) pop()=Removing (accessing) an element from the stack.
d) peek()=Get the top data element of the stack,without removing it
e) isFull()=Check ifstack is full.
f) isEmpty()=Check whether the stack is empty,and return true or false.

Note:--
(i) Create a separate function for each of the operations defined above.
(ii) Define the stack as follows.

#define MAXSIZE 100
struct stack{
int stArr[MAXSIZE];
int top; 
};
typedef struct stack STACK;

*/

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef struct stack{
    int stArr[MAXSIZE];
    int top;
}STACK;

void create(STACK *s){
    s->top=-1;
}

int isFull(STACK *s){
    return s->top==MAXSIZE-1;
}

int isEmpty(STACK *s){
    return s->top==-1;
}

void push(STACK *s,int value){
    if(isFull(s)){
        printf("Stack overflow! Cannot push %d\n",value);
        return;
    }
    s->stArr[++s->top]=value;
    printf("Pushed %d onto stack\n",value);
}

int pop(STACK *s){
    if(isEmpty(s)){
        printf("Stack underflow! Cannot pop\n");
        return -1;
    }
    return s->stArr[s->top--];
}

int peek(STACK *s){
    if(isEmpty(s)){
        printf("Stack is empty! No top element\n");
        return -1;
    }
    return s->stArr[s->top];
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
    printf("Popped %d from stack\n",pop(&s));
    peek(&s);
    return 0;
}
