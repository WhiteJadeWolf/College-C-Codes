/* PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS. */
#include <stdio.h>
void main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        printf("Enter 3 integers for row %d : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum[3]={0,0,0},allsum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i]+=a[i][j];
        }
    }
    for(int x=0;x<3;x++){
        printf("Sum of row %d elements : %d\n",x+1,sum[x]);
        allsum+=sum[x];
    }
    printf("Sum of all elements : %d",allsum);
}