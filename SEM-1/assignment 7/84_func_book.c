/* WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.*/

#include <stdio.h>

struct book{
    char an[20],title[30];
    float price;
    int year;
}b1;

void main(){
    printf("Enter Book Title : ");
    gets(b1.title);
    printf("Enter Author Name : ");
    gets(b1.an);
    printf("Enter the year : ");
    scanf("%d",&b1.year);
    printf("Enter Book Price : ");
    scanf("%f",&b1.price);
    printf("Title : %s\nAuthor Name : %s\nYear : %d\nPrice : %f\n",b1.title,b1.an,b1.year,b1.price);
}