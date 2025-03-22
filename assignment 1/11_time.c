// Program to read total seconds and convert it into time.
#include <stdio.h>
int main() {
  int ts,h,m,s;
  printf("Total no. of secs : ");
  scanf("%d",&ts);
  h=ts/3600;
  ts=ts%3600;
  m=ts/60;
  s=ts%60;
  printf("Hrs : %d\nMins : %d\nSecs : %d",h,m,s);
  }