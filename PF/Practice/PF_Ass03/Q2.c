#include<stdio.h>
void calculateFuel(int fuel,int consumption,int recharge,int solarBonus,int planet,int totalPlanets){
    if(fuel<=0 || planet>totalPlanets){ printf("Journey completed with %d fuel remaining.\n", fuel);return;} //Base Case
   if(fuel>consumption)fuel-=consumption;
   else fuel=0;
   if(planet%3==0)fuel+=recharge;  //planets in certain gravitational zones
  if(fuel>0) {if(planet%4==0)fuel+=solarBonus;}
   printf("Planet: %d  Fuel Remaining: %d\n",planet,fuel);
   calculateFuel(fuel,consumption,recharge,solarBonus,planet+1,totalPlanets);
}
int main(){
    int fuel,consumption=10000,recharge=2000,solarBonus=8000,planet=1,totalPlanets;
    printf("Enter amount of fuel spacecraft has: ");
    scanf("%d",&fuel);
    printf("Enter number of planets spacecraft needs to visit: ");
    scanf("%d",&totalPlanets);
    calculateFuel(fuel,consumption,recharge,solarBonus,planet,totalPlanets);
    return 0;
}