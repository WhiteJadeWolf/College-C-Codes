/* Check if expression entered by user has balanced parantheses or not */

#include <stdio.h>
#include <string.h>
#define MAX 101

int top = -1;
char pt[2][3] = {{'(','{','['},{')','}',']'}};

int isempty(char *stack){
    if(top == -1){
        return 1;
    }
    return 0;
}

char peek(char *stack){
    if(isempty(stack)){
        return '\0';
    }
    return stack[top];
}

void push(char *stack, char val, int n){
    if(top >= n-1){
        printf("ERROR : STACK OVERFLOW\n");
        return;
    }
    stack[++top] = val;
}

void pop(char *stack){
    if(isempty(stack)){
        return;
    }
    top--;
}

int checkbalpar(char *exp){
    int n = strlen(exp);
    char stack[n];
    for(int i=0; i<n; i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(stack, exp[i], n);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(isempty(stack)){
                return 0;
            }
            int flag=1;
            for(int j=0; j<3; j++){
                if(exp[i]==pt[1][j] && peek(stack)==pt[0][j]){
                    pop(stack);
                    flag=0;
                }
            }
            if(flag){
                return 0;
            }
        }
        else{
            continue;
        }
    }
    return isempty(stack) ? 1:0;
}

int main(){
    while(1){
        printf("\nEnter your choice :--\n1 - Check for balanced parantheses\n2 - Exit\nChoice : ");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:{   
                    char exp[MAX]; // variable declaration under case must be made inside block containing all content of the case
                    printf("\nEnter your expression : ");
                    getchar();
                    fgets(exp,MAX,stdin);
                    if(checkbalpar(exp)){
                        printf("Given Expression has BALANCED PARANTHESES\n");
                    }
                    else{
                        printf("Given Expression has UNBALANCED parantheses\n");
                    }
                    break;
                }
            case 2: break;
            default: printf("INVALID INPUT - TRY AGAIN.\n");
        }
    }
    return 0;
}