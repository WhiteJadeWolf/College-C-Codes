#include <stdio.h>
#include <string.h>

void main(){
    int n,counter=0;
    scanf("%d",&n);
    char arr[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",&arr[i]);
    }
    for(int i=97;i<=122;i++){
        int c=0;
        char x=(char)i;
        for(int i=0;i<n;i++){
            if(strchr(arr[i],x)!=NULL){
                c++;
            }
        }
        if(c==n){
            counter++;
        }
    }
    printf("%d",counter);
}