/* PROGRAM TO SORT (BUBBLE SORT) AN ARRAY. */
#include <stdio.h>
void main(){
    int n,a[10];
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers : ",n);
    for(int x=0;x<n;x++){
        scanf("%d",&a[x]);
    }

    for(int i=1;i<n;i++){             // BUBBLE SORTING
        for(int j=1;j<n;j++){
            if(a[j-1]>a[j]){
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array : ");
    for(int y=0;y<n;y++){
        printf("%d, ",a[y]);
    }
}
