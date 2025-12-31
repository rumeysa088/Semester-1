#include<stdio.h>
void calculateRepayment(float loan,int rate,int years,int currentYear,int installment,int extraPayment){
    float paymentApplied; 
    if(loan<=0 || years==0)return ;    //Base Case
     float totalPayment = installment + extraPayment;
     if(loan >= totalPayment) paymentApplied=totalPayment;
     else  paymentApplied=loan;
    loan -= paymentApplied;
    loan+=((loan*rate)/100);
     printf("Year: %d Remaining loan: %.2f\n",currentYear,loan);
    calculateRepayment(loan,rate,years-1,currentYear+1,installment,extraPayment);
     
}
int main(){
    float loan=100000.0;int rate=5,years=3;int installment=40000;int extraPayment;
    printf("Enter any extra payments: ");
    scanf("%d",&extraPayment);
    calculateRepayment(loan,rate,years,1,installment,extraPayment);
    return 0;
}
//recursion is used to solve a problem by breaking it into even smaller 
// pices of itself in our application of recursion we calcuate the loan to be paid which 
// get reduced each year here we dont use any loops or global variables to remember what year were currently calculating for.