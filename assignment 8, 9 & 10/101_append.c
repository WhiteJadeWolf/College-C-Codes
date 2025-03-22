/* WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    fp=fopen("LNMIITSTUDENT.DAT","a");
    if(fp==NULL){
        printf("File couldn't created!");
        return -1;
    }
    int roll,marks;
    char name[20];
    printf("Enter Data to be appended :-- \n");
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter Roll Number : ");
        scanf("%d",&roll);
        getchar();
        printf("Enter Name of Student : ");
        fgets(name,20,stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("Enter marks : ");
        scanf("%d",&marks);
        fprintf(fp,"%d %s %d\n",roll,name,marks);
    }
    fclose(fp);
    printf("Appended data :-- \n");
    fopen("LNMIITSTUDENT.DAT","r");
    for (int i=1; i<=n; i++) {
        fscanf(fp,"%d %s %d",&roll,name,&marks);
        printf("%d %s %d\n",roll,name,marks);
    }
    fclose(fp);
    return 0;
}