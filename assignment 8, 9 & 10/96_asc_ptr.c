/* WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS. */
#include <stdio.h>
#include <string.h>

void swap(char *a,char*b){
    char temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    printf("Enter the string : ");
    char str[100];
    scanf("%s",str);
    char *a=str;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(*(a+i)>*(a+j)){
                swap(a+i,a+j);
            }
        }
    }
    printf("Sorted string : %s",str);
}