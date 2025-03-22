/* Write a Program to print the following pattern :--
   
10000
01000
00100
00010
00001
  ...                */

#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}