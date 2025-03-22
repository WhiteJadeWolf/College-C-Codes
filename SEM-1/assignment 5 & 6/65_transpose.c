/* PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE. */
#include <stdio.h>
void main(){
    int a[3][3],res[3][3];
    for(int i=0;i<3;i++){
        printf("Enter 3 integers for row %d : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of the matrix :--\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=a[j][i];
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
}