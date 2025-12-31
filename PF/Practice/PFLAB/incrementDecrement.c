#include<stdio.h>
int main(){
               int a=10;

               printf("this is pre increment a will become %d \n",++a); // a becomes 11

               printf("%d\n",a++); //existing value of a (11) is used then incremented
               printf("%d",a); // it'll print post incremented value of a

return 0;}