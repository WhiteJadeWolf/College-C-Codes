// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A  LIST OF NUMBERS READ.

#include <stdio.h>
void main(){
    int sum=0;
    while(1){
        int n;
        printf("Enter a number : ");
        scanf("%d",&n);
        if(n>=0){
            sum+=n;
        }
        else{
            break;
        }
    }
    printf("Sum = %d",sum);
}