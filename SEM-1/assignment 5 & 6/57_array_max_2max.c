// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of elements to input : ");
    scanf("%d",&n);
    int arr[n],max1,max2,temp;
    printf("Enter %d integers : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max1=max2=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>max1){
            temp=max1;
            max1=arr[j];
            max2=temp;
        }
    }
    printf("MAX = %d\n2nd MAX = %d",max1,max2);
}