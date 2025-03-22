#include <stdio.h>

int findig(int n);

void main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++){
        printf("%d\n",findig(arr[i]));
    }
}

int findig(int n){
    int d,temp=n,c=0;
    while(n>0){
        d=n%10;
        if(temp%d==0){
            c++;
        }
        n/=10;
    }
    return c;
}