/* Write a Program to print the following pattern :--
   
   *
  ***
 *****
*******
 ***** 
  ***  
   *   
  ...                */

#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of rows (odd) : ");
    scanf("%d",&n);
    for(int i=1,j;i<=n;i++){
        if(i<=(n+1)/2){
            j=2*i-1;
        }
        else{
            j=2*(n-i)+1;
        }
        for(int x=1;x<=(n-j)/2;x++){
            printf(" ");
        }
        for(int k=1;k<=j;k++){
            printf("*");
        }
        printf("\n"); 
    }
}