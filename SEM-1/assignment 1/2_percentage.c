// Program to read marks of five subjects of a student and calculate total percentage
#include <stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,sum;
    float per;
    printf("Enter marks in 5 subjects : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(((m1+m2+m3+m4+m5)/500.0)*100.0);
    printf("Percentage : %f",per);
}