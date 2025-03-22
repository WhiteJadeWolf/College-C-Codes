/* PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT. */
#include <stdio.h>
void main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        printf("Enter 3 integers for row %d : ",i+1);
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0],min=a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            else if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("MAX : %d\nMIN : %d",max,min);
}