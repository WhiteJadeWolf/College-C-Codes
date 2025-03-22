/* MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO MODIFY)*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x,*ptr=&x,n;
    printf("Enter value : ");
    scanf("%d",&x);
    printf("Initial value of x : %d\n",x);
    printf("Enter a random value : ");
    scanf("%d",&n);
    *ptr = n;
    printf("Changed value of x : %d\n",*ptr);
}