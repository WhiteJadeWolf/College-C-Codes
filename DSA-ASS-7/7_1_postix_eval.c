/* Note: Input should be taken from the user
Write a C/C++ code to evaluate the Postfix Expression using stack.
Example :--
Input : 34*25*+
Output : 22          */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

char stack[MAX];
int top = -1;

void Push(int x){
    if(top > MAX-1){
        printf("ERROR : Stack overflow.\n");
        return;
    }
    stack[++top] = x;
}

int Pop(){
    if(top == -1){
        printf("ERROR : Stack underflow.\n");
        return -9999;
    }
    return stack[top--];
}

int IsEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

float calculate(char *postfix){
    int len = strlen(postfix);
    int i = 0, temp, res;
    while(i < len){
        res=0, temp=0;
        if(postfix[i] == '('){
            int dig = 0;
            while(postfix[++i] != ')'){
                dig = dig*10 + ((int)(postfix[i]) - 48);
            }
            Push(dig);
        }
        else if(isdigit(postfix[i])){
            Push(((int)(postfix[i]) - 48));
        }
        else{
            switch(postfix[i]){
                case '+' : res += Pop() + Pop();
                           Push(res); 
                           break;
                case '*' : res += Pop() * Pop();
                           Push(res);  
                           break;
                case '-' : temp = Pop();
                           res += Pop() - temp;
                           Push(res);
                           break;
                case '/' : temp = Pop();
                           res += Pop() / temp;
                           Push(res);
                           break;
                case '%' : temp = Pop();
                           res += Pop() % temp;
                           Push(res);
                           break;  
                case '^' : temp = Pop();
                           res += pow(Pop(),temp);
                           Push(res);
                           break; 
            }
        }
        i++;
    }
    return stack[top];
}

int main(){
    char postfix[MAX];
    printf("Enter Postfix Expression : ");
    scanf("%s",postfix);
    printf("Result = %f",calculate(postfix));
    return 0;
}