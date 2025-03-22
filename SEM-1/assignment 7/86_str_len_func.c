/* WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING */

#include <stdio.h>
#include <string.h>
#define MAX 99999

int length(char *c){
    int i=0;
    while(*c!='\0'){
        i++;
        c++;
    }
    return i;
}

void main(){
    char c[MAX];
    while(1){
        printf("Enter a string (enter ` to exit) : ");
        gets(c);
        if((length(&c)==1)&&c[0]=='`'){
            break;
        }
        printf("Length of the string : %d\n",length(&c));
    }
}