/* WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT. */

#include <stdio.h>

void checkpal(int n){
    int temp=n,rev=0;
    while(n>0){
        rev=(rev*10)+(n%10);
        n/=10;
    }
    if(rev==temp){
        printf("%d is PALINDROME\n",temp);
    }
    else{
        printf("%d is NOT palindrome\n",temp);
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
        checkpal(n);
    }
}