// Write a C Program to calculate amount to be paid by a dosmetic customer of an electric distribution company as per the charges given below :
//-------------------------------------------------------------------------------
// CONSUMPTION IN UNIT      ||      RATE OF CHARGE                              |
//-------------------------------------------------------------------------------
//      0-200               ||      Re. 0.50 per unit                           |
//      201-400             ||      Rs. 100 + Re. 0.65 per unit excess of 200   |
//      401-600             ||      Rs. 230 + Re. 0.80 per unit excess of 400   |
//      Above 600           ||      Rs. 425 + Rs. 1.25 per unit excess of 600   |
//-------------------------------------------------------------------------------

#include <stdio.h>
void main(){
    int unit;
    float amt;
    printf("Enter Consumption of Units : ");
    scanf("%d",&unit);
    if(unit<=200){
        amt=0.50*unit;
    }
    else if((unit>=201)&&(unit<=400)){
        amt=100.0+(0.65)*(unit-200.0);
    }
    else if((unit>=401)&&(unit<=600)){
        amt=230.0+(0.80)*(unit-400.0);
    }
    else{
        amt=425.0+(1.25)*(unit-600.0);
    }
    printf("Amount to be paid : Rs. %f",amt);
}