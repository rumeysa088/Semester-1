#include<stdio.h>
int main(){
            int balance,withdrawalAmount;
            
            printf("Enter your Current Account Balance\n");
            scanf("%d",&balance);

            printf("Enter the amount you want to withdraw\n");
            scanf("%d",&withdrawalAmount);

if(balance>withdrawalAmount && withdrawalAmount%8==0)            
   {
      printf(" Successfull Withdrawal");
   }         
else
{
     printf("Sorry you were unable to withdraw money");
}             
  
   return 0;         

}