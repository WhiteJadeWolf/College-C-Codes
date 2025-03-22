// Write a program to find the value of y using :--  y(x,n) = 1+x (for n=1) ; 1+x/n (for n=2) ; 1+x^n (for n=3) ; 1+nx (for n>3 or n<1);
#include <stdio.h>
#include <math.h>
void main(){
    float x,y;
    int n;
    printf("Enter x : ");
    scanf("%f",&x);
    printf("Enter n : ");
    scanf("%d",&n);
    switch (n){
        case 1 : y=1+x;
                 break;
        case 2 : y=1+(x/n);
                 break;
        case 3 : y=1+pow(x,n);
                 break;
        default : y=1+n*x;
    }
    printf("y = %f",y);
}