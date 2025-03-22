// Write a C Program to calculate the commission for a sales representative as per the sales amount given below :
// if sales <= Rs.500, commission is 5%
// if sales > Rs.500 but <= Rs.2000, commission is Rs.35 + 10% above Rs.500
// if sales > Rs.2000 but <= Rs.5000, commission is Rs.185 + 12% above Rs.2000
// if sales > Rs.5000, commission is 12.5%

#include <stdio.h>
void main(){
    float sales,com;
    printf("Enter amount of sales in Rs. : ");
    scanf("%f",&sales);
    if(sales<=500){
        com=(5.0/100.0)*sales;
    }
    else if((sales>500)&&(sales<=2000)){
        com=35.0+(10.0/100.0)*(sales-500.0);
    }
    else if((sales>2000)&&(sales<=5000)){
        com=185.0+(12.0/100.0)*(sales-2000.0);
    }
    else{
        com=(12.5/100.0)*sales;
    }
    printf("Commission : Rs. %f",com);
}