/* WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.*/

#include <stdio.h>
#include <string.h>

int check_vowel(char c);

void main(){
    char c;
    while(1){
        printf("Enter a character (Enter 0 to exit): ");
        scanf(" %c",&c); // space before %c to stop taking carriage return as input
        if(c=='0'){
            break;
        }
        else if(check_vowel(c)){
            printf("%c is a Vowel\n",c);
        }
        else{
            printf("%c is NOT a vowel\n",c);
        }
    }
}

int check_vowel(char c){
    if((strchr("AEIOUaeiou",c))!=NULL){
        return 1;
    }
    else{
        return 0;
    }
}