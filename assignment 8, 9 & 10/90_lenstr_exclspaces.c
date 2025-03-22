/* WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.*/
#include <stdio.h>
void main(){
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin); // fgets() also takes newline char
    int i=0,c=0;
    while(str[i]!='\0' && str[i]!='\n'){
        if(str[i]!=' '){
            c++;
        }
        i++;
    }
    printf("length of string without space :%d\nlength of string with space: %d",c,i);
}