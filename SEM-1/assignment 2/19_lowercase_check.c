// Program to read a character and check whether it is a small case letter or not using conditional operator.
#include <stdio.h>
void main(){
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    int x = ch;
    (x>=97)&&(x<=122)?(printf("%c is Lowercase",ch)):(printf("%c is NOT lowercase",ch));
}