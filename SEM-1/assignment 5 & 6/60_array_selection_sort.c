/* PROGRAM TO SORT (SELECTION SORT) AN ARRAY. */
#include <stdio.h>
void main(){
    int n,a[10];
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers : ",n);
    for(int x=0;x<n;x++){
        scanf("%d",&a[x]);
    }

    for(int i=0;i<n;i++){              // SELECTION SORTING
        int min=a[i],temp=a[i],ind=i;
        for(int j=i;j<n;j++){
            if(a[j]<min){
                min=a[j];
                ind=j;
            }
        }
        a[i]=min;
        a[ind]=temp;
    }
    printf("Sorted array : ");
    for(int y=0;y<n;y++){
        printf("%d, ",a[y]);
    }
}
