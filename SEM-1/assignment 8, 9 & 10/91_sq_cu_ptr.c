/* WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER. */
#include <stdio.h>
void main(){
    printf("Enter the number : ");
    int a,*ptr=&a;
    scanf("%d",&a);
    printf("Square : %d \nCube : %d",(*(ptr))*(*(ptr)),(*(ptr))*(*(ptr))*(*(ptr)));
}