#include<stdio.h>
int bitCount(int num){
    if(num==0)return 0;
    
    return bitCount(num>>1)+(num&1);
    
}
int main(){
     printf("no of set bit is %d",bitCount(7));
    return 0;
}