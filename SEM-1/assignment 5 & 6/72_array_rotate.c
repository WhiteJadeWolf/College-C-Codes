/* Write a program in C to rotate an array by N positions.
eg :-- {1,2,3,4,5,6,7,8,9} shifted by 4 is {6,7,8,9,1,2,3,4,5}
       {1,2,3,4,5} shifted by 2 is {4,5,1,2,3} */

#include <stdio.h>
void main(){
    int len,n;
    printf("Enter length of array : ");
    scanf("%d",&len);
    int a[len];
    printf("Enter %d elements : ",len);
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter rotating value : ");
    scanf("%d",&n);
    int b[len],x=len-n,ind=0;
    while(ind<len){
        if(x<len){
            b[ind++]=a[x++];
        }
        else{
            b[ind++]=a[x++ - len];
        }
    }
    printf("Rotated array :--\n");
    for(int i=0;i<len;i++){
        a[i]=b[i];
        printf("%d\t",a[i]);
    }
    
}