/* WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE. */

#include <stdio.h>

int isprime(int n){
    int c=1;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return c;
}

void main(){
    int n;
    while(1){
        printf("Enter a number (Enter -1 to exit) : ");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        else if(isprime(n)){
            printf("%d is PRIME\n",n);
        }
        else{
            printf("%d is NOT prime\n",n);
        }
    }
}