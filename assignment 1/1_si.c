// program to calculate simple interest
#include <stdio.h>
void main(){
    float p,r,si;
    int t;
    printf("Enter Principal : ");
    scanf("%f",&p);
    printf("Enter Rate of interest : ");
    scanf("%f",&r);
    printf("Enter Time in years : ");
    scanf("%d",&t);
    si=(p*r*t)/100.0;
    printf("Simple Interest : %f",si);
}