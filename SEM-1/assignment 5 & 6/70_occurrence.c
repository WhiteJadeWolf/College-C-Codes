/*  PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR 
ELEMENT IN THE ARRAY.  */
#include <stdio.h>
void occur(int n,int a[],int x){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            c+=1;
        }
    }
    if(c==0){
        printf("%d is not present in the array.",x);
    }
    else{
        printf("%d occurs %d times in the array",x,c);
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
    printf("Enter no. to find its occurrence : ");
    scanf("%d",&x);
    occur(n,a,x);
}