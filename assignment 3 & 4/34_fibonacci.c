// Program to print Fibonacci series (0,1,1,2,3,5,...)
#include <stdio.h>
void main(){
    int n1=0,n2=1,n,temp;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    for(int i=3;i<=n;i++){
        temp=n2;
        printf("%d\t",n1+n2);
        n2+=n1;
        n1=temp;
    }
    if(n<5){
        printf("please enter a range more than 4");
    }
}