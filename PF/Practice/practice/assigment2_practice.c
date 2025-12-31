// #include<stdio.h>
// void Cinfor(char cnic[],char name[]){
//   printf("Enter you name\n");
//   scanf(" %[^\n]",name);
//    printf("Enter you CNIC\n");
//   scanf(" %[^\n]",cnic);
  
// }
// void DisplayInventory(int productCode[],int productQuantity[],int price[]){
 
//     printf("Product Code \t\t Quantity in Stock \t\t price per product\n");
//   for(int i=0;i<4;i++)
//   {
//   printf("\t%d\t\t\t%d\t\t\t\t%d\t\t\n",productCode[i],productQuantity[i],price[i]);
//   }
  
// }
// void UpdateInventory(int productCode[],int productQuantity[]){ int code,quantity;
//   printf("product code");
//   scanf("%d",&code);
//   printf("How many did you get");
//   scanf("%d",quantity);
//   for(int i=0;i<4;i++){
//     if(productCode[i]==code){quantity[i]-=quantity;}
//   }

// }
// int main(){
//     int opt;int Pcode[4]{001,002,003,004};int quantity[4]={50,10,20,8};int price[]={100,200,300,150};
//     char cnic[20];char name[20];
//     printf("\t\t\t\t\tMENU OPTIONS\t\t\t\n");
//       do{
//       printf("\n1:Customer Information\n2:Display Inventory\n3:Update Inventory\n4:Add Item to Cart\n5:Display Total Bill\n6:Show Invoice\n7:Exit System\n");
//       scanf("%d",&opt);
 
//       switch(opt)
//       {
//         case 1:
//                Cinfor(cnic,name);
//         break;

//         case 2:
//                 DisplayInventory( productCode,productQuantity, price);
//         break;

//         case 3:
//                 UpdateInventory( productCode,productQuantity)
//         break;

//         case 4:
               
//         break;

//         case 5:
              
//         break;

//         case 6:
               
//         break;

//         case 7:break;

//         default:
//                 printf("Invalid option! Try again\a\n");
//         break;
//       }

//       }while(opt!=7);
    
//     return;
// }
// #include<stdio.h>
// void push(int stack[],int maxSize,int *top){ int element;
//     printf(enter element u wanna push);
//     scanf("%d",&element);
//     if(*top==maxSize-1)printf("cant push");
//      else{
//     (*top)++;stack[*top]=element;}
// }
// void pop(int stack[],int maxSize,int *top){
//     if(*top==-1)printf("Cant do");
//     else{(*top)--;}
// }
// int main(){
//      int maxSize,opt;
//      printf("Enter the size of the stack: ");
//      scanf("%d",&maxSize);
//      int stack[maxSize];int top=-1;
     
//      do
//      {
//        printf("\n\t\t\t What function do u want to perform? \n");
//        printf("1:PUSH\n2:POP\n3:PEEK\n4:DISPLAY\n5:EXIT\n");
//        scanf("%d",&opt);
    
//      switch(opt)
//      {
//        case 1:  //PUSH
               
//        break;

//        case 2:  //POP
              
//        break;

//        case 3:  //PEEK
               
//        break;
        
//        case 4: //DISPLAY
//                display(maxSize,stack,top);
//        break;

//        case 5:break;

//        default:
//                 printf("Invalid Option try again\a\n");
//        break;
//      }
//      }while(opt!=5);
//     return 0;
// }

#include<stdio.h>
void encode(char message[],int *size){
printf("Enter message to encode");
scanf(" %[^\n]",message);

while(message[size]!='\0'){
    size++;
}
   for(int i=0;i<size/2;i++){
      int temp=message[i];
      message[i]=message[size-1-i];
      message[size-1-i]=temp;
   }
   for(int i=0;i<size;i++){
     message[i]^=(1<<1);
     message[i]^=(1<<4);
   }
   printf("encoded message : ");
    for(int i=0;i<size;i++){
     printf("%c",message[i]);
   }
     
}
void decode(char message[],int size){
     for(int i=0;i<size;i++){
     message[i]^=(1<<1);
     message[i]^=(1<<4);
   }
     for(int i=0;i<size/2;i++){
      int temp=message[i];
      message[i]=message[size-1-i];
      message[size-1-i]=temp;
   }
    printf("decoded message : ");
    for(int i=0;i<size;i++){
     printf("%c",message[i]);
   }
}
int main(){
            int opt;char message[256];int size=0;
  do{
  printf("\t\t=======MENU OPTIONS========\t\t\n");
  printf("\nSelect one from below\n");
  printf("1:Encode message\n2:Decode message\n3:Exit\n");
  scanf("%d",&opt);

  switch(opt)
  {
    case 1:  //encode
           encode(message,&size);
    break;

    case 2:  //decode
           decode(message, size)
    break;

    case 3:break;

    default:
            printf("Invalid Option try again\a\n");
    break;
  }
  }while(opt!=3);


    return 0;
}