// Program to read 3 numbers and print the max.
#include <stdio.h>
void main(){
    long a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a>=b){
        if(a>=c){
            printf("Max = %ld",a);
        }
        else{ // c>a
            printf("Max = %ld",c);
        }
    }
    else{ // b>a
        if(b>=c){
            printf("Max = %ld",b);
        }
        else{ // c>b
            printf("Max = %ld",c);
        }
    }
}