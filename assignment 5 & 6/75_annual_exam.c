/*The annual examination results of 10 students are tabulated as follows: 
Roll No.              Maths          Physics           Chemistry

WAP to read the data and determine the following :--
(a) Total marks obtained by each student. 
(b) The highest marks in each subject and the Roll No. of the student who secured it. 
(c) The student who obtained the highest total marks. */

#include <stdio.h>

int maxindex(int a[10][4],int x){
    int max=a[0][x],maxindex;
    for(int i=1;i<10;i++){
        if(a[i][x]>max){
            max=a[i][x];
            maxindex=i;
        }
    }
    return maxindex;
}

void main(){
    int a[10][4];
    for(int i=1;i<=10;i++){
        printf("Enter Roll no., Marks in Maths, Marks in Physics, Marks in Chemistry of Student %d : ",i);
        scanf("%d%d%d%d",&a[i-1][0],&a[i-1][1],&a[i-1][2],&a[i-1][3]);
    }
    printf("\n");
    int maxsum=a[0][1],maxsumindex;
    for(int i=0;i<10;i++){
        int sum=0;
        for(int j=1;j<4;j++){
            sum+=a[i][j];
        }
        printf("Total marks obtained by Roll No. %d : %d\n",a[i][0],sum);
        if(sum>maxsum){
            maxsum=sum;
            maxsumindex=i;
        }
    }
    printf("\n");
    printf("Highest Marks in Maths is %d , obtained by Roll No. %d\n",a[maxindex(a,1)][1],a[maxindex(a,1)][0]);
    printf("Highest Marks in Physics is %d , obtained by Roll No. %d\n",a[maxindex(a,2)][2],a[maxindex(a,2)][0]);
    printf("Highest Marks in Chemistry is %d , obtained by Roll No. %d\n\n",a[maxindex(a,3)][3],a[maxindex(a,3)][0]);
    printf("Highest Total Marks is %d , obtained by Roll No. %d",maxsum,a[maxsumindex][0]);
}