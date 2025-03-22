// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE ARRAYS INTO THIRD.
#include <stdio.h>
void main(){
    int a[10],b[10],c[10];
    printf("Enter 10 integers for 1st array : ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 10 integers for 2nd array : ");
    for(int j=0;j<10;j++){
        scanf("%d",&b[j]);
    }
    printf("Resultant array : ");
    for(int k=0;k<10;k++){
        c[k]=a[k]+b[k];
        printf("%d,",c[k]);
    }
}
