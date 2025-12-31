#include<stdio.h>
void pIp(int num){
    if(num==0 )return ;
    printf("%d ",num);
    pIp(num-1);
    printf("%d ",num);
    pIp(num-1);
    printf("%d ",num);
    
    
}
int main(){
     pIp(2);
    return 0;
}