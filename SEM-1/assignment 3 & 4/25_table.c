// Program to print table of any no.
#include <stdio.h>
void main(){
    int n,t=1;
    printf("Enter a no. : ");
    scanf("%d",&n);
    while (t<=10){
        printf("%d * %d = %d\n",n,t,(n*t));
        t++;
    }
}