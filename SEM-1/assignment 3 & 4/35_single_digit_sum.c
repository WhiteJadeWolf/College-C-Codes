// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGITS OF N.
// eg :-- 456 = 4+5+6 = 15 = 1+5 = 6

#include <stdio.h>
int digsum(int a){
        int d,sum=0;
        while(a>0){
            d=a%10;
            sum+=d;
            a/=10;
        }
    return sum;
}

void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum=digsum(n);
    while(1){
        if(sum<=9){
            printf("Single digit sum : %d",sum);
            break;
        }
        else{
            sum=digsum(sum);
        }
    }
}