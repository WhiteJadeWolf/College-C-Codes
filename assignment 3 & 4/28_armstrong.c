// Program to check whether a no. is Armstrong no. or not. A number is an armstrong number if the sum of individual digits powered to the 
// total no. of digits, is equal to the number itself.
// eg:-- 153 --> 1^3 + 5^3 + 3^3 = 153
//       1634 --> 1^4 + 6^4 + 3^4 + 4^4
#include <stdio.h>
#include <math.h>
void main(){
    int n,d,x=0,temp,res=0;
    printf("Enter a no. : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        n=n/10;
        x++;
    }
    n=temp;
    while(n>0){
        d=n%10;
        res+=pow(d,x);
        n/=10;
    }
    if(res==temp){
        printf("%d is ARMSTRONG NO.",temp);
    }
    else{
        printf("%d is NOT ARMSTRONG NO.\n",temp);
    }
}