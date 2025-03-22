// Program which will work like a simple calculator using switch-case.
#include <stdio.h>
void main(){
    char op;
    float a,b;
    printf("Enter first operand : ");
    scanf("%f",&a);
    printf("Enter operator : ");
    scanf(" %ch",&op); // space before %c (if not given then it registers ENTER key press i.e. \n as the input); adding a space before %c tells scanf() to ignore all leadong whitespace-like inputs(including the previously store \n) and read the first non-whitespace character from stdin.
    printf("Enter second operand : ");
    scanf("%f",&b);
    switch(op){
        case '+':printf("RESULT : %f",(a+b));
                break;
        case '-':printf("RESULT : %f",(a-b));
                break;
        case '*':printf("RESULT : %f",(a*b));
                break;
        case '/':printf("RESULT : %f",(a/b));
                break;
        default:printf("INVALID OPERATOR");
    }
}