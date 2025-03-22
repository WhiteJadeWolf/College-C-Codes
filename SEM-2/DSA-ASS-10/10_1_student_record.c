/* You are given a text file, named “students.txt” that contains students’ records. 
Each Line contains information of a single student in the form of <Student Name, Roll No, Department>.

A. Read the records from the file into an array of structures.

B. Three Options will turn up: (1) Bubble Sort, (2) Binary Search, and (3) Quit. 
In the following we describe what your C/C++ program will do on Selecting the options.

(1) Bubble Sort: Sorts the records based on Student Name. 
If more than One students has the same name, then sort them on their roll no.

(2) Binary Search: Given a student name, the function will return all the Student records
<Student Name, Roll No, Department> having the Student name.

(3) Quit: Exit the program. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAME 50
#define MAXDEPT 100
#define MAXNO 100

typedef struct{
    char name[MAXNAME];
    int roll;
    char dept[MAXDEPT];
}Student;

Student students[MAXNO];
int c = 0;
int issorted = 0;

void readfile(){
    FILE *f = fopen("students.txt","r");
    if(!f){
        printf("ERROR : Failed to open File.\n");
        return;
    }
    while(fscanf(f, "%s %d %s", &students[c].name, &students[c].roll, &students[c].dept) == 3){
        c++;
    }
    fclose(f);
}

void bubblesortname(){
    for(int i = 0; i < c-1; i++){
        for(int j = 0; j < c-i-1; j++){
            if((strcmp(students[j].name,students[j+1].name) > 0) || (strcmp(students[j].name,students[j+1].name) == 0 && students[j].roll > students[j+1].roll)){
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    printf("Records Sorted Successfully.\n");
    issorted = 1;
}

void binarysearch(char *x){
    if(!issorted){
        printf("Sort the records first.\n");
        return;
    }
    int l = 0, r = c-1;
    int flag = 0;
    while(l <= r){
        int m = l + (r-l)/2;
        int cmp = strcmp(students[m].name,x);
        if(cmp == 0){
            printf("%s  %d  %s\n", students[m].name, students[m].roll, students[m].dept);
            flag = 1;
        }
        else if(cmp < 0){
            l = m + 1;
        }
        else if(cmp > 0){
            r = m - 1;
        }
    }
    if(!flag){
        printf("ERROR : Given name is not in the records.\n");
    }
}

int main(){
    readfile();
    if(c == 0){
        printf("No Record Found.\n");
        return 0;
    }
    while(1){
        int ch;
        printf("Enter your choice :--\n1 - Bubble-Sort the records based on Name\n2 - Search for students based on Name\n3 - Exit\nChoice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: bubblesortname();
                    break;
            case 2:
            {
                char x[MAXNAME];
                printf("Enter Name to search records : ");
                scanf("%s",&x);
                binarysearch(x);
                break;
            }
            case 3: printf("Program Exited.\n");
                    exit(0);
            default: printf("INVALID CHOICE - TRY AGAIN.\n");
        }
    }
    return 0;
}