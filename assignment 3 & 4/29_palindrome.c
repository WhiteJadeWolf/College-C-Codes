// Program to check whether a no. is Palindrome no. or not. A number is an palindrome number if the reverse of the number is same as the original number. 
// eg :-- 121, 1441 etc.
#include <stdio.h>
void main(){
    int n,d,temp,rev=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        d=n%10;
        rev=10*rev+d;
        n/=10;
    }
    if(rev==temp){
        printf("%d is PALINDROME NO.",temp);
    }
    else{
        printf("%d is NOT PALINDROME NO.\n",temp);
    }
}