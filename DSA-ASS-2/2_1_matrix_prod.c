/* Write a C program to multiply two matrices using dynamic memory allocation. 
Each two-dimensional array should be processed as array of pointers to a set of 1-dimensional integer arrays. 
Read, access and display the matrix elements using pointers instead of subscript notation. 
Use three functions i) To read input matrix ii) To compute the product and iii) To display the resultant matrix. */

#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int r,int c){
    int **matrix=(int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++){
        *(matrix+i)=(int*)malloc(c*sizeof(int));
    }
    return matrix;
}

void freeMatrix(int **matrix,int r){
    for(int i=0;i<r;i++){
        free(*(matrix+i));
    }
    free(matrix);
}

void inputMatrix(int **matrix,int r,int c){                     // 1
    printf("Enter elements of the matrix (%dx%d):--\n",r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",(*(matrix+i)+j));
        }
    }
}

void multiplyMatrices(int **mat1,int **mat2,int **result,int r1,int c1,int c2){     // 2
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            *(*(result+i)+j)=0;
            for (int k=0;k<c1;k++){
                (*(*(result+i)+j))+=(*(*(mat1+i)+k))*(*(*(mat2+k)+j));
            }
        }
    }
}

void printMatrix(int **matrix,int r,int c){  // 3
    printf("Product Matrix (%dx%d):\n",r,c);
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}

int main(){
    int r1,r2,c1,c2;
    printf("Enter rows and columns for the first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns for the second matrix : ");
    scanf("%d %d",&r2,&c2);
    if (c1!=r2){
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return -1;
    }
    int **mat1=allocateMatrix(r1,c1);
    int **mat2=allocateMatrix(r2,c2);
    int **result=allocateMatrix(r1,c2);
    inputMatrix(mat1,r1,c1);
    inputMatrix(mat2,r2,c2);
    multiplyMatrices(mat1,mat2,result,r1,c1,c2);
    printMatrix(result,r1,c2);
    freeMatrix(mat1,r1);
    freeMatrix(mat2,r2);
    freeMatrix(result,r1);
    return 0;
}