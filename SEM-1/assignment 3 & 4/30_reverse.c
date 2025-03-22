// Program to reverse a number. 
#include <stdio.h>
void main(){
    int n,d,rev=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        rev=10*rev+d;
        n/=10;
    }
    printf("Reverse : %d",rev);
}