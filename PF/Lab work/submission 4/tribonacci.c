#include<stdio.h>
int trib(int n){

    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    return trib(n-1)+trib(n-2)+trib(n-3);
}
int main(){

    int n;
    printf("Enter no of term you want: ");
    scanf("%d",&n);
    printf("term will be: %d",trib(n));
    return 0;
}