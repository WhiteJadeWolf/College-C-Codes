// Program to calculate the area of a circle
#include <stdio.h>
float pi=3.14;
float main(){
    float r,ar;
    printf("Enter the radius : ");
    scanf("%f",&r);
    ar=pi*r*r;
    printf("Area of the circle = %f sq. units",ar);
    return ar;
}