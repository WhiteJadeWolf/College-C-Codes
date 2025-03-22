/* PROGRAM TO READ TWO 3*3 MATRICES AND FIND THEIR PRODUCT */
#include <stdio.h>
void main(){
    int a[3][3],b[3][3],res[3][3];
    printf("For 1st matrix :--\n");
    for(int i=0;i<3;i++){
        printf("Enter 3 integers for row %d : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("For 2nd matrix :--\n");
    for(int i=0;i<3;i++){
        printf("Enter 3 integers for row %d : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Product Matrix :--\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;            // r00=00*00+01*10+02*20; r01=00*01+01*11+02*21; r02=00*02+01*12+02*22
            for(int k=0;k<3;k++){ // r10=10*00+11*10+12*20; ...
                sum+=a[i][k]*b[k][j];
            }
            res[i][j]=sum;
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
}