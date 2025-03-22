/* WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. 
NCR = (!N/(!R*!(N-R))); */

#include <stdio.h>

float nCr(int n, int r){
    float m=1.0;
    for(int i=n;i>1;i--){
        m*=(float)i;
    }
    for(int i=r;i>1;i--){
        m/=(float)i;
    } 
    for(int i=n-r;i>1;i--){
        m/=(float)i;
    }
    return m;
}

void main(){
    int n,r;
    printf("N = ");
    scanf("%d",&n);
    printf("R = ");
    scanf("%d",&r);
    printf("NCR = %f\n",nCr(n,r));
}