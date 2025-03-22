/* WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING POINTER TO A STRUCTURE.*/

#include <stdio.h>

struct book{
    char an[20],title[30];
    float price;
    int year;
};

void main(){
    struct book b1;
    struct book *ptr = &b1;
    printf("Enter Book Title : ");
    gets(b1.title);
    printf("Enter Author Name : ");
    gets(b1.an);
    printf("Enter the year : ");
    scanf("%d",&b1.year);
    printf("Enter Book Price : ");
    scanf("%f",&b1.price);
    printf("Title : %s\nAuthor Name : %s\nYear : %d\nPrice : %f\n",(*ptr).title,(*ptr).an,(*ptr).year,(*ptr).price);
}