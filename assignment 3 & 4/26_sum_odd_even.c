// Program to print sum of all odd and even nos. between 1 to n
#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int odd=0,even=0;
    while (n>0){
        if (n%2==0){
            even+=n;
        }
        else {
            odd+=n;
        }
        n--;
    }
    printf("Sum of all odd numbers = %d\n",odd);
    printf("Sum of all even numbers = %d",even);
}