/* A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N 
STUDENTS. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    int roll,marks;
    char name[20];
    fp=fopen("LNMIITSTUDENT.JAVA","w");
    if(fp==NULL){
        printf("File could not be opened");
        return -1;
    }
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter Roll Number :");
        scanf("%d",&roll);
        getchar();
        printf("Enter name : ");
        fgets(name,20,stdin);
        name[strcspn(name,"\n")]='\0';
        printf("Enter total marks: ");
        scanf("%d",&marks);
        fprintf(fp,"%d %s %d\n",roll,name,marks);
    }
    fclose(fp);
    fp=fopen("LNMIITSTUDENT.JAVA","r");
    printf("Saved Data :-- \n");
    for(int i=1;i<=n;i++){
        fscanf(fp,"%d %s %d",&roll,name,&marks);
        printf("%d %s %d\n",roll,name,marks);
    }
    fclose(fp);
    return 0;
}