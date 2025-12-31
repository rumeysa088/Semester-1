#include<stdio.h>
#include<string.h>
void info(char name[300],char cnic[30])
{
   
    printf("Enter you name: ");
    scanf(" %[^\n]",name);
    printf("Enter you CNIC: ");
   scanf(" %[^\n]", cnic);       //LBA

    return;
}
void displayInventory(int productCode[],int productQuantity[],int price[])
{  
  printf("Product Code \t\t Quantity in Stock \t\t price per product\n");
  for(int i=0;i<4;i++)
  {
  printf("\t%d\t\t\t%d\t\t\t\t%d\t\t\n",productCode[i],productQuantity[i],price[i]);
  }
  return;
}
void UpdateInventory(int productCode[],int *productQuantity,int code,int quantityBought)
{   
  

    for(int i=0;i<4;i++) {
    if(productCode[i] == code) {
        productQuantity[i] -= quantityBought;
        break;
    }
}
  return;
}
void addToCart(int code,int quantityBought,int *subTotal,int productCode[],int productQuantity[],int price[]){
 
   printf("Enter product code of the product bought: \n");
   scanf("%d",&code);
   printf("Enter quantity of the product bought: \n");
   scanf("%d",&quantityBought);
  for(int i=0;i<4;i++) {
    if(productCode[i]==code) {
        *subTotal+=quantityBought*price[i];
        break;
    }
}
 
   UpdateInventory(productCode,productQuantity,code,quantityBought);
  return;

}
void totalBill(char promoCode[30],int *subTotal,float *bill){
                 *bill = *subTotal; 
                    if(strcmp(promoCode,"Eid2025")==0)
                    {
                         *bill = *subTotal * 0.75;
              }
          
  return;
}
void displayInvoice(char name[300],char cnic[30],int subTotal,float bill){
                      printf("Name of customer: %s\n",name);
                      printf("CNIC: %s\n",cnic);
                      printf("Amount payable before discount= %d\n",subTotal);
  printf("Amount payable after discount= %.2f\n",bill);
  

   return;
}
int main(){
            int opt;char name[300];char cnic[30];
            int code,quantityBought;int subTotal=0;char promoCode[30];float bill;
            int productCode[4]={001,002,003,004};int productQuantity[4]={50,10,20,8}; int price[4]={100,200,300,150};
      printf("\t\t\t\t\tMENU OPTIONS\t\t\t\n");
      do{
      printf("\n1:Customer Information\n2:Display Inventory\n3:Update Inventory\n4:Add Item to Cart\n5:Display Total Bill\n6:Show Invoice\n7:Exit System\n");
      scanf("%d",&opt);
 
      switch(opt)
      {
        case 1:
               info(name,cnic); //LBA
        break;

        case 2:
               displayInventory(productCode,productQuantity,price);
        break;

        case 3:
                printf("Enter product code of the product bought");
                scanf("%d",&code);
                printf("Enter quantity of the product bought");
                scanf("%d",&quantityBought);
               UpdateInventory(productCode,productQuantity,code,quantityBought);  //LBA
        break;

        case 4:
               addToCart(code,quantityBought,&subTotal,productCode,productQuantity,price);
        break;

        case 5:
               printf("Do you have a voucher for discount?\n");
               scanf("%s",promoCode);
               totalBill(promoCode,&subTotal,&bill);
        break;

        case 6:
               displayInvoice(name,cnic,subTotal,bill);
        break;

        case 7:break;

        default:
                printf("Invalid option! Try again\a\n");
        break;
      }

      }while(opt!=7);
    return 0;
}