// Program to read 3 numbers and print the max using logical operator &&
#include <stdio.h>
void main(){
    long a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%ld%ld%ld",&a,&b,&c); // %ld is used for scanning long type data.
    if(a>=b && a>=c){
        printf("Max = %ld",a);
    }
    else if(b>=c && b>=a){
        printf("Max = %ld",b);
    }
    else if(c>=a && c>=b){
        printf("Max = %ld",c);
    }
}