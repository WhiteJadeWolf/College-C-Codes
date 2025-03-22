/* WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM. */

#include <stdio.h>

int array_max(int arr[],int len){
    int max=arr[0];
    for(int i=1;i<len;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

void main(){
    int len;
    printf("Enter length of array : ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter %d numbers : ",len);
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("Maximum = %d",array_max(arr,len));
}