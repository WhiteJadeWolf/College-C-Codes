/* WRITE A PROGRAM TO COPY ELEMENTS OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS*/
#include <stdio.h>
void main(){   
    int a;
    printf("Enter length of array : ");
    scanf("%d",&a);
    int arr1[a],arr2[a];
    printf("Enter the elements of array : ");
    for(int k=0;k<a;k++){
        scanf("%d",&arr1[k]);
    }
    for(int k=0;k<a;k++){
        *(arr2+k)=*(arr1+k);
    }
    printf("Elements of second array :--\t");
    for(int k=0;k<a;k++){
        printf("%d  ",arr2[k]);
    }
}