// Write a C program to calculate the cutoff mark of a student
// using the formula CM = M/2 + P/2 + C/2 + E
#include <stdio.h>
int main() {
  float cm,m,p,c,e;
  printf("Enter marks in Mathematics out of 200 : ");
  scanf("%f",&m);
  printf("Enter marks in Physics out of 200 : ");
  scanf("%f",&p);
  printf("Enter marks in Chemistry out of 200 : ");
  scanf("%f",&c);
  printf("Enter marks in Entrance Exam out of 100 : ");
  scanf("%f",&e);
  cm=m/2+c/2+p/2+e;
  printf("Cutoff Marks : %f",cm);
  }