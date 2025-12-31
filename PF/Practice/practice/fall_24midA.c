// #include<stdio.h>
// int main(){
//                int num;int count=0;
//                printf("Enter number");
//                scanf("%d",&num);
//   while(num!=1){
//     if(num>0)
//     {
//       if(num%2==0)
//       {
//         num=num/2;
//         count++;printf("%d\t",num);printf("%d\n",count);
//       }
//       else
//       {
//         num=num*3+1;
//         count++;printf("%d\t",num);printf("%d\n",count);
//       }
//     }
//    }

// return 0;
// }

// #include<stdio.h>
// int main(){
//             int itemType,itemPrice,quantity,discount,subtotal,total_price;

//             printf("select item type no. :\n1.smartphones\n2.refrigirator\n3.projectors\n");
//             scanf("%d",&itemType);
//             printf("enter price of item");
//             scanf("%d",&itemPrice);
//             printf("enter quantity of item");
//             scanf("%d",&quantity); 
//             printf("enter discount percentage");
//             scanf("%d",&discount);
//             subtotal=itemPrice*quantity;
//     switch(itemType)
//     {
//       case 1:
//       total_price=subtotal-(subtotal*0.12);
//       break;
//       case 2:
//       total_price=subtotal;break;
//       case 3:
//       total_price=subtotal;break;
//     }   

//     printf("Total Price is %d",total_price);

// return 0;
//}

// #include <stdio.h>

// int main() {
//     int itemType;
//     int money, bill = 0;  // initialize bill to 0
//     int countc = 0, countw = 0, countg = 0;  // initialize counters to 0

//     printf("Enter the amount of money you have: ");
//     scanf("%d", &money);

//     do {
//         printf("\nSelect item type:\n");
//         printf("1. Cola - Rs 40\n");
//         printf("2. Water - Rs 20\n");
//         printf("3. Gummies - Rs 30\n");
//         printf("6. Finish and collect change\n");
//         scanf("%d", &itemType);

//         switch(itemType) {
//             case 1:
//                 countc++;
//                 bill += 40;  // add price to bill
//                 break;
//             case 2:
//                 countw++;
//                 bill += 20;
//                 break;
//             case 3:
//                 countg++;
//                 bill += 30;
//                 break;
//             case 6:
//                 // finish ordering
//                 break;
//             default:
//                 printf("Invalid item. Try again.\n");
//         }
//     } while(itemType != 6);

//     printf("\nYour total bill is: %d\n", bill);

//     if(money >= bill) {
//         printf("Your change is: %d\n", money - bill);
//     } else {
//         printf("NOT ENOUGH MONEY\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int donation_amount, sqNum, count;
//     int root;
//     int education = 0, healthcare = 0, environment = 0;

//     do {

//         printf("Enter donation amount (0 to stop): ");
//         scanf("%d", &donation_amount);

//         if (donation_amount == 0)
//             break;

//         sqNum = donation_amount * donation_amount;  // Use integer multiplication
//         root = (int)sqrt(donation_amount);         // Cast to int for perfect square check

//         count = 0; // Reset count for each loop

//         for (int i = 1; i <= sqNum; i++) {
//             if (sqNum % i == 0)
//                 count++;
//         }

//         if (count == 2) {
//             education = sqNum;
//         }
//         else if (sqNum % 5 == 0) {
//             healthcare = sqNum;
//         }
//         else if (root * root == donation_amount) {
//             environment = sqNum;
//         }

//     } while (1);

//     printf("education: %d\n", education);
//     printf("environment: %d\n", environment);
//     printf("healthcare: %d\n", healthcare);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int op,operand1,operand2;int result;
//    printf("Select the operation you want to perform\n1:AND\n2:OR\n3:NOT\n4:XOR\n");
//   scanf("%d",&op);

//   if(op==1)
//   {
//     printf("Enter first operand");
//     scanf("%d",&operand1);
//     printf("Enter second operand");
//     scanf("%d",&operand2);
//     result=operand1&operand2;
//     printf("Result is %d",result);

//   }
//   else if(op==2)
//   {
//    printf("Enter first operand");
//     scanf("%d",&operand1);
//     printf("Enter second operand");
//     scanf("%d",&operand2);
//     result=operand1 | operand2;
//     printf("Result is %d",result);
//   }
//   else if(op==3)
//   {
//    printf("Enter first operand");
//     scanf("%d",&operand1);
//     result=~operand1;
//     printf("Result is %d",result);
//   }else if(op==4)
//   {
//    printf("Enter first operand");
//     scanf("%d",&operand1);
//     printf("Enter second operand");
//     scanf("%d",&operand2);
//     result=operand1^operand2;
//     printf("Result is %d",result);
//   }

// return 0;
// }
