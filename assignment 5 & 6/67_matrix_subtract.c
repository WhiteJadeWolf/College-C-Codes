/* PROGRAM TO READ TWO 3*3 MATRICES AND SUBTRACT THEIR VALUES AND STORE THEM IN
THIRD MATRIX. */
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
    printf("Resultant Matrix :--\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=a[i][j]-b[i][j];
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
}