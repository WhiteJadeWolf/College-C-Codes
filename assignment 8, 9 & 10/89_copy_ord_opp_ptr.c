/* WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY BUT ORDER OF ELEMENTS IN SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. */
#include <stdio.h>
void main(){   
    int a;
    printf("Enter length of array : ");
    scanf("%d",&a);
    int arr1[a],arr2[a];
    printf("Enter the elements : ");
    for(int k=0;k<a;k++){
        scanf("%d",&arr1[k]);
    }
    for(int k=a-1;k>=0;k--){
        *(arr2+k)=*(arr1+a-k-1);
    }
    printf("Elements of second array :--\t");
    for(int k=0;k<a;k++){
        printf("%d  ",arr2[k]);
    }
}