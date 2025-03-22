// PROGRAM TO PRINT 1,3,5,7,9………N.

#include <stdio.h>
void main(){
    int n;
    printf("Enter limiting number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        printf("%d\t",i);
    }
}