/*WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y . */

#include <stdio.h>

void exchange(int *x, int *y){  // used pointers for call by reference, so that data actually gets exchanged.
    int temp=*x;
    *x=*y;
    *y=temp;
}

void main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    exchange(&x,&y);
    printf("Now x is %d\n",x);
    printf("Now y is %d\n",y);
}