#include <stdio.h>
#include <string.h>
#define CONSTRAINT 100

void biggerisgreater(char w[]);

void main(){
    int t;
    scanf("%d",&t);
    char arr[t][CONSTRAINT];
    getchar();
    for(int i=0;i<t;i++){
        gets(arr[i]);
    }
    for(int i=0;i<t;i++){
        biggerisgreater(arr[i]);
    }    
}        

void bubblesort(char w[],int pivot,int len){
    for(int i=pivot+1;i<len;i++){             // BUBBLE SORTING
        for(int j=1;j<len;j++){
            if(w[j-1]>w[j]){
                char temp=w[j-1];
                w[j-1]=w[j];
                w[j]=temp;
            }
        }
    }
}
    


void biggerisgreater(char w[]){
    int pivot,len=strlen(w);
    for(int i=len-1;i>=1;i--){
        if(w[i-1]<w[i]){
            pivot=i-1;
            break;
        }
    }
    int mincharpos=pivot;    
    for(int i=pivot;i<len;i++){
        if(w[pivot]<w[mincharpos]){
            mincharpos=pivot;
        }
    }
    char temp=w[pivot];
    w[pivot]=w[mincharpos];
    w[mincharpos]=temp;
    if(pivot!=(len-1)){
        bubblesort(w,pivot,len);
        printf("%s\n",w);
    }
    else{
        printf("%s\n",w);
    }
}