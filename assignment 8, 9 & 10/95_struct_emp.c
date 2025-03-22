/* WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER ,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN 
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC PAY.*/
#include <stdio.h>

struct emp{
    int emp_num;
    char emp_name[100];
    int pay;
};

void main(){
    struct emp employ[50];
    printf("Enter the number of Employee's details : ");
    int a;
    scanf("%d",&a);
    printf("\nEnter the details :--\n");
    for(int i=0;i<a;i++){
        struct emp *ptr=&employ[i];
        printf("\nEnter Employee Name : ");
        scanf("%s",&ptr->emp_name);
        printf("Enter Employee No. : ");
        scanf("%d",&ptr->emp_num);
        printf("Enter Employee's Basic Pay : ");
        scanf("%d",&ptr->pay);
    }
    printf("\n");
    for(int i=0;i<a;i++){
        struct emp *ptr=&employ[i];
        printf("Employee's Name : %s || Basic Pay : %d\n",ptr->emp_name,ptr->pay);
    }
}