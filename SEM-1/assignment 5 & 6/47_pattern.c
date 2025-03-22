/* Write a Program to print the following pattern :--
   
   A
   AB
   ABC
   ABCD
   ABCDE
   ...                */

#include <stdio.h>
void main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=65;j<65+i;j++){
            printf("%c",(char)j);
        }
        printf("\n");
    }
}