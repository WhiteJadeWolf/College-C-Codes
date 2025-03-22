// Program to check whether a no. is prime or not.
#include <stdio.h>
void main(){
    int n,c=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c==0){
        printf("%d is a PRIME NUMBER",n);
    }
    else{
        printf("%d is NOT PRIME NUMBER",n);
    }
}