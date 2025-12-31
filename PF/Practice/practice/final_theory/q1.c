#include<stdio.h>

int ways(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    
    return 1+ways(n-1)+ways(n-2);
}
int main(){
    int n;
     printf("How many masks to sell?");
     scanf("%d",&n);
     printf("\nWays to sell masks: %d",ways(n));
    return 0;
}