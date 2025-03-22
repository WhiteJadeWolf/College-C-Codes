// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include <stdio.h>
void main(){
    int arr[10],sum=0;
    printf("Enter 10 integers : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        sum+=arr[j];
    }
    printf("Sum = %d",sum);
}