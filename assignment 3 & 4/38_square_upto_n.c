// PROGRAM TO PRINT 1,4,9,16,25,………N. 

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",i*i);
    }
}