// Program to convert Temperature from Fahrenheit to Degree Celcius
#include <stdio.h>
int main() {
  float c,f;
  printf("Enter Temperature in Fahrenheit: ");
  scanf("%f",&f);
  c=(f-32.0)*5.0/9.0;
  printf("Temperature in Celsius: %f °C",c);
  }