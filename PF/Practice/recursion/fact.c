#include<stdio.h>
int factorial(int num){
    if(num>=1)
    {
       return num*factorial(num-1);
    }else{ return 1;}
}
int main(){
    printf("%d",factorial(5));
    return 0;
}