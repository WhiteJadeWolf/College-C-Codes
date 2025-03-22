// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.

#include <stdio.h>
void main(){
    int n,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c++;
            break;
        }
    }
    if(c){
        printf("%d is COMPOSITE",n);
    }
    else{
        printf("%d is PRIME",n);
    }
}