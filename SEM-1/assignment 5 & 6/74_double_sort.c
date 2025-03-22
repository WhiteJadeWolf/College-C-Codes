/* Given are one dimensional arrays A and B. 
Write a program to merge them into a single sorted array C that contains every 
item from array A and B, in ascending order.  */

#include <stdio.h>
void bubblesort(int n,int x[]){
    for(int i=1;i<n;i++){             // BUBBLE SORTING
        for(int j=1;j<n;j++){
            if(x[j-1]>x[j]){
                int temp=x[j-1];
                x[j-1]=x[j];
                x[j]=temp;
            }
        }
    }
    printf("Sorted array :--\n");
    for(int i=0;i<n;i++){
        printf("%d, ",x[i]);
    }
}

void main(){
    int n1,n2;
    printf("Enter no. of elements for 1st array : ");
    scanf("%d",&n1);
    int a[n1];
    printf("For 1st array :--\nEnter %d integers : ",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no. of elements for 2nd array : ");
    scanf("%d",&n2);
    int b[n2];
    printf("For 2nd array :--\nEnter %d integers : ",n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    int res[n1+n2];
    for(int i=0;i<n1+n2;i++){
        if(i<n1){
            res[i]=a[i];
        }
        else{
            res[i]=b[i-n1];
        }
        printf("%d",res[i]);
    }
    bubblesort(n1+n2,res);
}