// Program to calculate gross salary.
#include <stdio.h>
int main() {
  float basic,da,hra,pf;
  printf("Enter Basic Salary :");
  scanf("%f",&basic);
  printf("Enter Dearness Allowance :");
  scanf("%f",&da);
  printf("Enter House Rent Allowance :");
  scanf("%f",&hra);
  printf("Enter Provident Fund :");
  scanf("%f",&pf);
  float gross=basic+da+hra-pf;
  printf("Gross Salary = %f",gross);
}