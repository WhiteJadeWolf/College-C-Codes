/* Write a Program to print the following pattern :--
   
   1   
  121
 12321
1234321
  ...                */

#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int x=1;x<=n-i;x++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}