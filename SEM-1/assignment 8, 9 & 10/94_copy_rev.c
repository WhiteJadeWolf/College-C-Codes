/* WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS.
FOR EXAMPLE, 
ST = "SVNITJAVA" IS COPIED AS "AVAJTINVS" */
#include <stdio.h>
#include <string.h>
#define MAX 10000
void main(){
    char s1[MAX],s2[MAX],*x,*eptr;
    printf("Enter the string : ");
    gets(s1);
    int l=strlen(s1);
    eptr=s1+l-1;
    x=s2;
    for (int i=0;i<l;i++){
        *x=*eptr;
        eptr--;
        x++;
    }
    printf("String 2 : %s",s2);
} 