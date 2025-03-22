/* PROGRAM TO REVERSE AN ARRAY. */
#include <stdio.h>
void main(){
    int n,a[10];
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers : ",n);
    for(int x=0;x<n;x++){
        scanf("%d",&a[x]);
    }

    for(int i=0;i<n/2;i++){   // REVERSING PROCESS
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("Reversed array : ");
    for(int y=0;y<n;y++){
        printf("%d, ",a[y]);
    }
}