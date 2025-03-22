// Program to check whether a given character is Capital letter,
// small letter, a digit or a special symbol.
#include <stdio.h>
#include <ctype.h>
int main(){
  char c;
  printf("Enter a character : ");
  scanf("%c",&c);
  if(isupper(c)){
    printf("%c is an uppercase letter",c);
  }
  else if(islower(c)) {
    printf("%c is a lowercase letter",c);
  }
  else if(isdigit(c)) {
      printf("%c is a digit",c);
  }
  else {
    printf("%c is a special character",c);
  }
  }