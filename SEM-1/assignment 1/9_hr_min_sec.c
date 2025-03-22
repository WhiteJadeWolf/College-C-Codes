// Program to read time in hr,min,sec and convert it into total seconds.
#include <stdio.h>
int main() {
  int h,m,s,ts;
  printf("Enter no. of hrs :");
  scanf("%d",&h);
  printf("Enter no. of mins :");
  scanf("%d",&m);
  printf("Enter no. of secs :");
  scanf("%d",&s);
  ts=(h*60*60)+(m*60)+s;
  printf("Total no. of secs : %d",ts);
  }