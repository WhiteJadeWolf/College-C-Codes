/* WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS. */

#include <stdio.h>

void nfibo(int n){
    int a=0,b=1,x;
    printf("%d\t%d\t",a,b);
    for(int i=2;i<=n;i++){
        x=a+b;
        printf("%d\t",x);
        a=b;
        b=x;
    }
}

void main(){
    int n;
    while(1){
        printf("\n(Enter -1 to exit)\nn = ");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        nfibo(n);
    }
}