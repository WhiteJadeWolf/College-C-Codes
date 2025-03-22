// Program to read two nos. and calculate power without using header file <math.h>
#include <stdio.h>
void main(){
    int p;
    float n,res=1.0;
    printf("Enter base : ");
    scanf("%f",&n);
    printf("Enter power : ");
    scanf("%d",&p);
    while (p>0){
        res=res*n;
        p--;
    }
    printf("Result = %f",res);
}