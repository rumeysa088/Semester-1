#include<stdio.h>
#include<string.h>
typedef struct{
  int day;
  float unitsConsumed;
}DailyConsump;
typedef struct{
   char custName[40];
   int custID;
   DailyConsump arr[30];
}ElectricityBill;
typedef struct{
  float rate;
  float upperLimit;
}BillingTier;

float calculateTotalConsump(ElectricityBill b,BillingTier billingTier[3]){
    float units=0;
  for(int i=0;i<30;i++){
     units+=b.arr[i].unitsConsumed;
  }float bill;
  printf("\nName: %s",b.custName);
  printf("\nID : %d",b.custID);
  printf("\n UNITS: %f",units);
 
  if(units<=50){bill=units*billingTier[0].rate;}
  else if(units>50 && units<100){bill=50*billingTier[0].rate;bill+=(units-50)*billingTier[1].rate;}
  else {bill=50*billingTier[0].rate;bill+=50*billingTier[1].rate;;bill+=(units-100)*billingTier[2].rate;}
    printf("\n Bill: %f",bill);
 return units;
}
void findFreq(ElectricityBill b){
    int frequency[30];
  for(int i=0;i<30;i++){
    float x=b.arr[i];int freq=0;
    for(int j=0;j<30;j++){
      if(x==b.arr[j].unitsConsumed){freq++;}
    }frequency[i]=freq;
  }
  for(int i=0;i<30;i++){
    printf("Frequency of %f is %d",b.arr[i].unitsConsumed,frequency[i]);
  }
}
void analysis(ElectricityBill b){ float max=-1;int index;
  for(int i=0;i<30;i++){
    if(b.arr[i].unitsConsumed>max){max=b.arr[i].unitsConsumed;}
  } float maxunit=max;max=-1;
   for(int i=0;i<30;i++){
    if(b.arr[i].unitsConsumed>max && b.arr[i].unitsConsumed!=maxunit ){max=b.arr[i].unitsConsumed;index=i;}
  }printf(" Second Max units consumed are %f on day %d ",max,b.arr[index].day);

  int min=b.arr[0].unitsConsumed;
  for(int i=0;i<30;i++){
     if(b.arr[i].unitsConsumed<min){min=b.arr[i].unitsConsumed;}
  }int fmin=min;min=b.arr[0].unitsConsumed;
  for(int i=0;i<30;i++){
     if(b.arr[i].unitsConsumed<min && b.arr[i].unitsConsumed!=fmin ){min=b.arr[i].unitsConsumed;}
  }int smin=min;min=b.arr[0].unitsConsumed;
  for(int i=0;i<30;i++){
     if(b.arr[i].unitsConsumed<min && b.arr[i].unitsConsumed!=fmin && b.arr[i].unitsConsumed!=smin ){min=b.arr[i].unitsConsumed;index=i;}
  }printf(" Third units consumed are %f on day %d ",min,b.arr[index].day);
}
int main(){
     BillingTier billingTier[]={{0.10,50.0},
                                {0.15,100.0},
                                {0.2,-1}};
    return 0;
}