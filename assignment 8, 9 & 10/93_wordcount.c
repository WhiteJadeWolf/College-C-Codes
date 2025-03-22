/* WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.  */
#include <stdio.h>
#include <string.h>
#define MAX 10000
void main(){
    char s[MAX],*p;  
    int words=0;
    printf("Enter  the string : ");
    fgets(s,MAX,stdin);
    p=s;
 	while(*p)  {
    	if(*p==32)
           words++;
           p++;
	} 
    if(strlen(s)>0){
        words++;
    }
    printf("No. of words in string = %d\n",words); 
} 