// Program to calculate area of a triangle.
#include <stdio.h>
int main() {
  float base,height,area;
  printf("Enter base length :");
  scanf("%f",&base);
  printf("Enter height :");
  scanf("%f",&height);
  area=(base*height)/2.0;
  printf("Area of the triangle = %f sq.units",area);
  }