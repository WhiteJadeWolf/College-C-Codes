// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.

#include <stdio.h>
void main(){
    float n,sum=0;
    printf("Enter the value of n : ");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        float fac=1.0;
        for(int j=i;j>=1;j--){
            fac*=j;
        }
        sum+=i/(fac);
    }
    printf("result : %f",sum);
}