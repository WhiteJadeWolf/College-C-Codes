/* Write a C program to hold two integer pointers as structure members.
Allocate space for the structure and its data members during runtime. 
Get one array as input. In the second array copy the elements of the first array and replace the odd positioned
elements by the product of its adjacent elements. 
Access the array elements and structures using pointers instead of subscript notation.

First Array (Input)
1  2  3  4  5  6

Second Array (Output)
1  3  3  15  5  6 

*/

#include <stdio.h>
#include <stdlib.h>

struct Arrays{
    int *ptr1,*ptr2;
};

int main(){
    int length;
    printf("Enter length of the array : ");
    scanf("%d",&length);
    struct Arrays NewArrs;
    NewArrs.ptr1=(int *)malloc(length*sizeof(int));
    NewArrs.ptr2=(int *)malloc(length*sizeof(int));
    printf("Enter the elements of the first array : ");
    for(int i=0;i<length;i++){
        scanf("%d",(NewArrs.ptr1+i));
    }
    for (int i=0;i<length;i++){
        if (i%2==0){
            *(NewArrs.ptr2+i)=*(NewArrs.ptr1+i);
        }
        else{
            if(i>0 && i<length-1){
                *(NewArrs.ptr2+i)=(*(NewArrs.ptr1+i-1))*(*(NewArrs.ptr1+i+1));
            }
            else{
                *(NewArrs.ptr2+i)=*(NewArrs.ptr1+i);
            }
        }
    }
    printf("Second Array : ");
    for(int i=0;i<length;i++){
        printf("%d ",*(NewArrs.ptr2+i));
    }
    free(NewArrs.ptr1);
    free(NewArrs.ptr2);
    return 0;
}
