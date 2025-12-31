#include<stdio.h>
struct Date{
   int day;
   int month;
   int year;
};
struct flights{
   int flightNum;
   char deptCity[20];
   char destCity[20];
   struct Date date;
   int availableSeats;
};
void bookFlight(struct flights *f){
   if(f.availableSeats>0){
      f.availableSeats--;
      printf("Seat booked successfully\n");
   } else{
      printf("No seats available\n");
   }
}
void displayFlight(struct flights f){
   printf("Flight No: %d\nDeparture: %s\nDestination: %s\nDate: %02d-%02d-%04d\nAvailable Seats: %d\n",
      f.flightNum,f.deptCity,f.destCity,f.date.day,f.date.month,f.date.year,f.availableSeats);
}
int main(){
   struct flights f={123,"Karachi","Lahore",{8,12,2025},5};
   displayFlight(f);
   bookFlight(&f);
   displayFlight(f);
   return 0;
}
