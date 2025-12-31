#include<stdio.h>
int stairs(int num){
    if( num==1 || num==2 )return num;
    if(num==3)return 2;
    
   return stairs(num-1)+stairs(num-2)+stairs(num-3);
    
}
int main(){
     printf("ways to climb %d",stairs(5));
    return 0;
}