/*  PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.  */
#include <stdio.h>
void find(int n,int a[],int x){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            c+=1;
            printf("%d found at index : %d",x,i);
            break;
        }
    }
    if(c==0){
        printf("%d is not present in the array.",x);
    }
}

void main(){
    int n,x;
    printf("Enter no. of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d nos. : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter no. to search : ");
    scanf("%d",&x);
    find(n,a,x);
}