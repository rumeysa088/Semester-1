#include<stdio.h>
int main()
{ int year,dept;

    printf("Select your year of study\n1:first year\n2:second year\n");
    scanf("%d",&year);

    switch(year)
    {
      case 1:
      printf("Enter your department\n1:CS\n2:ECE\n");
      scanf("%d",&dept);
      switch(dept)
      {
       case 1:
       printf("Your core subject is PF");
       break;
       case 2:
       printf("Your core subject is DLD");
       break;
       }
      
      break;

      case 2:
      switch(dept)
      {
        case 1:
        printf("Your core subject is data structures");
        break;
        case 2:
        printf("Your core subject is Microprocessorss");
        break;
      }
      break;

    }

return 0;
}
/*Scenario:

You are developing a fare calculator for a city's public transport system. The system calculates the ticket price based on the type of transport (Bus, Metro, or Ferry), the distance travelled, and the passenger's category 
(Adult, Student, Senior Citizen). The fare is also adjusted based on peak or off-peak hours.

🚍 Transport Modes and Base Rates (per km):
Transport	Base Rate (per km)
Bus	1.0
Metro	1.5
Ferry	2.0
👤 Passenger Category Discounts:

Student: 50% discount

Senior Citizen: 30% discount

Adult: No discount

🕒 Time Adjustment:

Peak hours (7AM–10AM, 5PM–8PM): +20% fare increase

Off-peak hours: No change

💬 Task:

Write a program that:

Asks the user to enter:

Mode of transport (1. Bus, 2. Metro, 3. Ferry)

Distance in kilometers

Passenger category (1. Adult, 2. Student, 3. Senior Citizen)

Hour of travel (0–23)

Calculates and displays the final fare after applying:

Base fare = base rate × distance

Category discount

Peak hour adjustment

Uses nested decision structures and operators to implement the logic.*/
// #include<stdio.h>
// int main(){
//             int T_type,distance;P_category;float baseFare;
//             printf("Enter you transport type\n 1:BUS\n3:FERRY\n2:METRO");
//             scanf("%d",&T_type);

//             switch(T_type)
//             {
//                case 1:
//                       printf("enter the distance u wanna travel in km");
//                       scanf("%d",distance);
//                       //BaseFare = 1.0*distance;
//                       //baseFare=baseFare-(BaseFare*0.5)
//                       printf("Enter passenger category\n1:Adult\n2:Student\n3:senior citizen\n");
//                       scanf("%d",&P_category);
//                       switch(P_category)
//                       {
//                         case 1:
//                         BaseFare = 1.0*distance;
//                         break;
                        
//                         case 2:
//                         BaseFare = 1.0*distance;
//                         baseFare=baseFare-(BaseFare*0.5);
//                         break;

//                         case 3:
//                         BaseFare = 1.0*distance;
//                         baseFare=baseFare-(BaseFare*0.3);
//                         break;
//                       }
//                break;
//                case 2:
//                        printf("enter the distance u wanna travel in km");
//                        scanf("%d",distance);
//                        //BaseFare = 1.5*distance;
//                        printf("Enter passenger category\n1:Adult\n2:Student\n3:senior citizen\n");
//                        scanf("%d",&P_category);
//                        switch(P_category)
//                       {
//                         case 1:
//                         BaseFare = 1.5*distance;
//                         break;
                        
//                         case 2:
//                         BaseFare = 1.5*distance;
//                         baseFare=baseFare-(BaseFare*0.5);
//                         break;

//                         case 3:
//                         BaseFare = 1.5*distance;
//                         baseFare=baseFare-(BaseFare*0.3);
//                         break;
//                       }
//                break;
//                case 3:
//                        printf("enter the distance u wanna travel in km");
//                        scanf("%d",distance);
//                        //BaseFare = 2.0*distance;
//                        printf("Enter passenger category\n1:Adult\n2:Student\n3:senior citizen\n");
//                        scanf("%d",&P_category);
//                        switch(P_category)
//                       {
//                         case 1:
//                         BaseFare = 2.0*distance;
//                         break;
                        
//                         case 2:
//                         BaseFare = 2.0*distance;
//                         baseFare=baseFare-(BaseFare*0.5);
//                         break;

//                         case 3:
//                         BaseFare = 2.0*distance;
//                         baseFare=baseFare-(BaseFare*0.3);
//                         break;
//                       }
//                break;

//             }
           




//   return 0;
// }
#include<stdio.h>
int main()
    
{  int service,treatment_fee,time_slot,tCharges,total_bill;
  printf("what service do u want to get\n1:Consultation\n2:Teeth whitning\n3:braces\n4:root canal\n5:surgicalgum graft\n6:Exit");
  scanf("%d",&service);

  switch(service)
  {
    case 1:
    treatment_fee=2000;
    printf("Enter time slot\n1:9am-12pm\n2:2pm-4pm\n3:6pm-8pm");
    scanf("%d",&time_slot);
    switch(time_slot)
    {
      case 1:
      tCharges=500;
       total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 2:
      tCharges=1000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 3:
      tCharges=2000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;
    }
    break;

    case 2:
    treatment_fee=2500;
    printf("Enter time slot\n1:9am-12pm\n2:2pm-4pm\n3:6pm-8pm");
    scanf("%d",&time_slot);
    switch(time_slot)
    {
      case 1:
      tCharges=500;
       total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 2:
      tCharges=1000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 3:
      tCharges=2000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;
    }
    break;

    case 3:
    treatment_fee=10000;
    printf("Enter time slot\n1:9am-12pm\n2:2pm-4pm\n3:6pm-8pm");
    scanf("%d",&time_slot);
    switch(time_slot)
    {
      case 1:
      tCharges=500;
       total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 2:
      tCharges=1000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 3:
      tCharges=2000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;
    }
    break;

    case 4:
    treatment_fee=14000;
    printf("Enter time slot\n1:9am-12pm\n2:2pm-4pm\n3:6pm-8pm");
    scanf("%d",&time_slot);
    switch(time_slot)
    {
      case 1:
      tCharges=500;
       total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 2:
      tCharges=1000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 3:
      tCharges=2000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;
    }
    break;

    case 5:
    treatment_fee=8000;
    printf("Enter time slot\n1:9am-12pm\n2:2pm-4pm\n3:6pm-8pm");
    scanf("%d",&time_slot);
    switch(time_slot)
    {
      case 1:
      tCharges=500;
       total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 2:
      tCharges=1000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;

      case 3:
      tCharges=2000;
      total_bill=tCharges+treatment_fee;
       printf("your total charges are %d",total_bill);
      break;
    }
    break;

    case 6:
    break;

    



  }
return 0;
}