// #include<stdio.h>
// int main(){
//                int num;int dig1;int dig2;int count=0;int dig3;
               

//                printf("Enter number");
//                scanf("%d",&num);
//                int original=num;
//         while(num>0)
//         { 
//           num=num/10;
//           count++;
//         }
//     if(count==3)
//     {
//        dig1=original/100;
//        dig3=original%10;
//        dig2=(original/10)%10;      
//        if(dig1+dig3==dig2)
//        {
//            printf("TRUE");
//        }else{printf("FALSE");}
//     }else{printf("NOT 3 DIGIT NUM");}
// return 0;
// }

// #include<stdio.h>
// int main(){
//                int accountNumber,beginningBalance,itemPrice,newBalance;
//                int itemsPurchased,totalCharge=0,totalCredits,creditLimit;
               

//                printf("Enter Account number");
//                scanf("%d",&accountNumber);
//                printf("Enter beginning balance");
//                scanf("%d",&beginningBalance);
//                printf("Enter total credits");
//                scanf("%d",&totalCredits);
//                printf("Enter credit card limit");
//                scanf("%d",&creditLimit);
//                printf("Enter No of items purchased");
//                scanf("%d",&itemsPurchased);
               
//                int i;
//                for(i=1;i<=itemsPurchased;i++)
//                {
//                  printf("Enter price of item %d",i);
//                  scanf("%d",&itemPrice);
//                  totalCharge=totalCharge+itemPrice;
//                }

//                newBalance=(beginningBalance+totalCharge)-totalCredits;
//      if(newBalance>creditLimit)
//      {
//                printf("Account number %d\n",accountNumber);
//                printf("Credit limit %d\n",creditLimit);
//                printf("New Balance %d\n",newBalance);
//                printf(" Credit limit exceeded by %d",newBalance-creditLimit);
//      }
               
              
// return 0;
// }
#include<stdio.h>
int main(){  int barcode,dig1,dig2,lastDig,secLast;
   printf("Enter 5 digit barcode");
   scanf("%d",&barcode);
   //cat 1
   dig1=barcode/10000;
   dig2=(barcode/1000)%10;
   lastDig=barcode%10;
   secLast=(barcode%100)/10;
   if((dig1%2==0 || dig1%4==0)&&(dig2%2==0 || dig2%4==0))printf("Category one");
  else if((lastDig%3)==0 && (secLast%2!=0))printf("Category two");
  else{printf("Category three");}
   
    return 0;
}
