// Program to read marks of 5 subjects and print division.
#include <stdio.h>
int main() {
  float a,b,c,d,e,avg;
  printf("Enter marks of 5 subjects out of 100 : ");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  avg=(a+b+c+d+e)/5.0;
  if(avg>=90.0){
    printf("Grade : A+");
  }
  else if(avg<90.0 && avg>=80){
    printf("Grade : A");
  }
  else if(avg<80.0 && avg>=60){
    printf("Grade : B");
  }
  else if(avg<60.0 && avg>=35){
    printf("Grade : C");
  }
  else {
    printf("Grade : F");
  }
}