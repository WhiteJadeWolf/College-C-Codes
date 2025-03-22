/* WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING 
   ARRAY OF STRUCTURE INTO FUNCTION).*/

#include <stdio.h>

struct student_info{
    int roll,marks;
    char name[20];
};

void display(struct student_info arr[]){
    printf("\nInfo of students who got greater than 500 :--\n------------------------------------\n");
    for(int i=0;i<10;i++){
        if(arr[i].marks>500){
            printf("Roll Number : %d\nName : %sMarks : %d\nx----------------------------------x\n",arr[i].roll,arr[i].name,arr[i].marks);
        }
    }
}

void main(){
    struct student_info arr[10];
    for(int i=0;i<10;i++){
        printf("Enter Roll Number : ");
        scanf("%d",&arr[i].roll);
        getchar();  // to remove \n from input buffer
        printf("Enter Name : ");
        fgets(arr[i].name,20,stdin);
        printf("Enter Marks out of 1000 : ");
        scanf("%d",&arr[i].marks);
        getchar();
    }
    display(arr);
}