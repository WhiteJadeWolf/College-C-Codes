// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND EVEN NOS.
#include <stdio.h>
void main(){
    int arr[10],co=0,ce=0;
    printf("Enter 10 integers : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        if(arr[j]%2==0){
            ce+=1;
        }
        else{
            co+=1;
        }
    }
    printf("No. of odd nos. = %d\n",co);
    printf("No. of even nos. = %d",ce);
}