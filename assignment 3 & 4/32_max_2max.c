// Program to find out max and second max from 'N' nos.
#include <stdio.h>
void main(){
    int n,d,rev=0,max1,max2;
    printf("Enter number of inputs : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }                           // array input completed. now we have a list of numbers.
    max1=arr[0];
    max2=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
    }
    printf("MAX NO. : %d\nSECOND MAX NO. : %d",max1,max2);
}