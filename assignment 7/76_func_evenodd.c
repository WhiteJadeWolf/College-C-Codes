/* WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD. */

#include <stdio.h>

void evenodd(int n){
    if(n%2==0){
        printf("%d is EVEN\n",n);
    }
    else{
        printf("%d is ODD\n",n);
    }
}

void main(){
    int n;
    while(1){
        printf("Enter a number (type -1 to quit) : ");
        scanf("%d",&n);
        if(n==-1){
            break;
        }
        evenodd(n);
    }
}