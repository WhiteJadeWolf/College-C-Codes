/* Create a Structure called BankMgmt with AccNumber, CustName, AvlBalance, AccType as members. 
Implement a Bank management Application as menu driven program for the above said Structure scenario.

Menu Options :--
1. Withdrawal   2. Deposit    3. Display Balance    4. Exit

If option :--

1 is chosen- Amount can be withdrawn from the account (Withdrawn amount
should be given as input). For withdrawal the condition is- the AvlBalance must be
greater than withdrawn amount).

2 is chosen- Amount can be deposited to the account (the deposited amount
should be given as input). The deposited amount should be reflected in AvlBalance of
the account.

3 is chosen- Current available balance (AvlBalance) of the AccNumber should
be Displayed with other details

4 is chosen- Exit from the application

Sample Input:
100155  VenkatKrishna   4500.00   Saving */

#include <stdio.h>
#include <stdlib.h>

struct BankMgmt{
    long int AccNumber;
    char CustName[20],AccType[15];
    float AvlBalance;
};

int main(){
    struct BankMgmt NewAcc;
    printf("Enter Account Details (AccNumber  CustName  AvlBalance  AccType) :--\n");
    scanf("%ld%s%f%s",&NewAcc.AccNumber,&NewAcc.CustName,&NewAcc.AvlBalance,&NewAcc.AccType);
    int choice;
    while(1){
        printf("\nEnter your choice :--\n1) Withdrawal\n2) Deposit\n3) Display Balance\n4) Exit\nChoice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: float WdAmt;
                    printf("\nEnter Withdrawal Amount : ");
                    scanf("%f",&WdAmt);
                    if(NewAcc.AvlBalance>WdAmt){
                        NewAcc.AvlBalance-=WdAmt;
                        printf("\nWithdrawal Successful.\nAvailable Balance = Rs. %f\n",NewAcc.AvlBalance);
                    }
                    else{
                        printf("\nInsufficient Balance.\nAvailable Balance = Rs. %f\n",NewAcc.AvlBalance);
                    }
                    break;
            case 2: float DepAmt;
                    printf("\nEnter Amount to be Deposited : ");
                    scanf("%f",&DepAmt);
                    NewAcc.AvlBalance+=DepAmt;
                    printf("\nDeposit Successful.\nAvailable Balance = Rs. %f\n",NewAcc.AvlBalance);
                    break;
            case 3: printf("\nAccount Number : %ld\nCustomer Name : %s\nAccount Type : %s\nAvailable Balance : %f\n",NewAcc.AccNumber,NewAcc.CustName,NewAcc.AccType,NewAcc.AvlBalance);
                    break;
            case 4: exit(0);
            default:printf("\nInvalid Input! Try Again\n");
        }
    }
    return 0;
}