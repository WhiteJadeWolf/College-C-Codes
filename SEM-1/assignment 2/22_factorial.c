// Program to calculate factorial of a number
#include <stdio.h>
void main(){
    int n,fac=1;
    printf("Enter the no. : ");
    scanf("%d",&n);
    while (n>1){
        fac=fac*n;
        n--;
    }
    printf("factorial = %d",fac);
}