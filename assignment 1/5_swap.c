// Program to swap two variables using Third variable
#include <stdio.h>
int main() {
  int a,b,c;
  printf("Enter value of a :");
  scanf("%d",&a);
  printf("Enter value of b :");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("Now a = %d and b = %d",a,b);
}