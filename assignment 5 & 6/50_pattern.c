/* Write a Program to print the following pattern :--
   
A
BB
CCC
DDDD
EEEEE
  ...                */

#include <stdio.h>
void main(){
    int n,c=65;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",(char)c);
        }
        c++;
        printf("\n");
    }
}