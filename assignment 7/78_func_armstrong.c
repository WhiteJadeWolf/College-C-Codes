/* WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT. */

#include <stdio.h>
#include <math.h>

void checkarms(int n){
    int x,d,res=0,temp=n;
    while(n>0){
        n=n/10;
        x++; // x stores no. of digits
    }
    n=temp;
    while(n>0){
        d=n%10;
        res+=pow(d,x);
        n/=10;
    }
    if(res==temp){
        printf("%d is ARMSTRONG\n",temp);
    }
    else{
        printf("%d is NOT armstrong\n",temp);
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
        checkarms(n);
    }
}