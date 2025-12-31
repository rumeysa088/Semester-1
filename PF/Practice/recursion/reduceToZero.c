#include<stdio.h>
int reduce(int num){
   if(num==0){return 1;}
   else if( num%2==0 ){ return 1+reduce(num/2);}
   else return 1+reduce(num-1);
    
   
}
int main(){
     printf("no of steps are %d",reduce(10));
    return 0;
}