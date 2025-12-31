#include<stdio.h>
int sum(int num){
    if(num==0)return 0;
   return num+sum(num-1);
    
}
int main(){
     printf("SUM is %d",sum(4));
    return 0;
}