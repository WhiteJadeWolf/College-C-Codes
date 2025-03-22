#include <stdio.h>

int isfibo(int n);

void main(){
    int t;
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++){
        if(isfibo(arr[i])){
            printf("IsFibo\n");
        }
        else{
            printf("IsNotFibo\n");
        }
    }
}

int isfibo(int n){
    int a=0,b=1,x;
    while(x<n){
        x=a+b;
        a=b;
        b=x;
    }
    if(x==n){
        return 1;
    }
    else{
        return 0;
    }
}