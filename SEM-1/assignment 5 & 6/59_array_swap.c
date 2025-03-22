/* PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE
ARRAYS. */
#include <stdio.h>
void main(){
    int a[10],b[10],temp;
    printf("Enter 10 integers for 1st array : ");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 10 integers for 2nd array : ");
    for(int j=0;j<10;j++){
        scanf("%d",&b[j]);
    }
    for(int k=0;k<10;k++){
        temp=a[k];
        a[k]=b[k];
        b[k]=temp;
    }
    printf("arrays swapped.\nNow 1st array is : ");
    for(int x=0;x<10;x++){
        printf("%d, ",a[x]);
    }
    printf("\nNow 2nd array is : ");
    for(int y=0;y<10;y++){
        printf("%d, ",b[y]);
    }
}
