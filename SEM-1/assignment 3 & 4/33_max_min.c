// Program to find out max and min from 'N' nos.
#include <stdio.h>
void main(){
    int n,d,rev=0,max,min;
    printf("Enter number of inputs : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }                           // array input completed. now we have a list of numbers.
    max=arr[0];
    min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("MAX NO. : %d\nMIN NO. : %d",max,min);
}