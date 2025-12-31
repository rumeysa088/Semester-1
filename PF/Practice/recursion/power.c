#include<stdio.h>
int pOw(int num,int power){
    if(power==0)return 1;
   return num*pOw(num,power-1);
    
}
int main(){
     printf("A raised to power b is %d",pOw(2,3));
    return 0;
}