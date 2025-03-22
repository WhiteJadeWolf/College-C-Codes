// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS.
#include <stdio.h>
void main(){
    int arr[10],cp=0,cn=0,c0=0;
    printf("Enter 10 integers : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        if(arr[j]<0){
            cn+=1;
        }
        else if(arr[j]>0){
            cp+=1;
        }
        else{
            c0+=1;
        }
    }
    printf("No. of positive nos. = %d\n",cp);
    printf("No. of negative nos. = %d\n",cn);
    printf("No. of zeroes = %d\n",c0);
}