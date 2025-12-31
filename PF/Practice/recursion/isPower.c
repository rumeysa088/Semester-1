#include<stdio.h>
#include<stdbool.h>
bool power(int num){ 
    if(num==1)return true;
    if(num%2!=0)return false;
    power(num/2);
     
}
int main(){
    
    printf(" ans is %d",power(16));
    return 0;
}