// Program to read 3 numbers and print the max using conditional(?:) operator.
#include <stdio.h>
void main(){
    long a,b,c,m;
    printf("Enter 3 numbers : ");
    scanf("%ld%ld%ld",&a,&b,&c);
    m = (a>=b)?(a>=c?a:c):(b>=c?b:c);
    printf("Max = %ld",m);
}