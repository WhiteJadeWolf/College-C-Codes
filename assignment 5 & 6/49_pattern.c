/* Write a Program to print the following pattern :--
   
    *      
   * *   
  * * *  
 * * * * 
* * * * *
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
            printf("* ",j);
        }
        printf("\n");
    }
}