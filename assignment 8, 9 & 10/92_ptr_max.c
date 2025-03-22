/* WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS. */
#include <stdio.h>
void main(){
    int a;
    printf("Enter the length of array : ");
    scanf("%d",&a);
    int *arr[a];
    printf("Enter the numbers : ");
    for(int i=0;i<a;i++){
        scanf("%d",(arr+i));
    }
    int max=*arr;
    for(int i=1;i<a;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    printf("MAX : %d\n",max);
}