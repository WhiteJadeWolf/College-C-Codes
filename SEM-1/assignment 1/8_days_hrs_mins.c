// Earth takes a period of revolution of 31558150 seconds.
// Write a C program to convert this into number of days,hrs,mins.
#include <stdio.h>
int main() {
  long sec=31558150;
  int d,h,m;
  d=sec/(24*60*60);
  sec%=(24*60*60);
  h=sec/(60*60);
  sec%=(60*60);
  m=sec/60;
  printf("Days : %d\nHours : %d\nMinutes : %d",d,h,m);
  }