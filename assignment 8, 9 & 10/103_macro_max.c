/* WRITE A  C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS. */
#include <stdio.h>
#define MAX(a,b) ((a>b) ? a : b)
void main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    printf("Max = %d",MAX(a,b));
}