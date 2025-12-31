#include<stdio.h>
int main(){
            int billAmount;

    printf("Enter bill amount");
    scanf("%d",&billAmount);

    if(billAmount>5000)
      {
        billAmount=billAmount-(billAmount*0.1);
         printf(" After 10 percent discount your BILL AMOUNT IS %d/- ",billAmount);
      }
    else
    {
        printf("BILL AMOUNT IS %d ",billAmount);
    }


   return 0;         

}