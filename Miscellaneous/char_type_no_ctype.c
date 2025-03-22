// Program to check whether a given character is Capital letter,
// small letter, a digit or a special symbol.
#include <stdio.h>
void main(){
  char c;
  printf("Enter a character : ");
  scanf("%c",&c);
  int n = c;
  if((n>=65)&&(n<=90)){
    printf("%c is an uppercase letter",c);
  }
  else if((n>=97)&&(n<=122)) {
    printf("%c is a lowercase letter",c);
  }
  else if((n>=48)&&(n<=57)) {
      printf("%c is a digit",c);
  }
  else {
    printf("%c is a special character",c);
  }
  }