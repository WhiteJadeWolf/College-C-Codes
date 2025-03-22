// Program to print sum of individual digits of a 'N' digit no.
#include <stdio.h>
void main(){
    int n,d,sum=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while(n>0){
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("Sum : %d",sum);
}