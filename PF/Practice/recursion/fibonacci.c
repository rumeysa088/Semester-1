// #include<stdio.h>
// int fibo(int num){
//     if(num==2 || num==1)return 1;
//     int sum1=fibo(num-1);
//     int sum2=fibo(num-2);
//     int sum=sum1+sum2;
//    return sum;
    
// }
// int main(){
//      printf("Fibonacci nth term is %d",fibo(4));
//     return 0;
// }
#include<stdio.h>
int fibo(int num){
    if(num==2 || num==1)return 1;
   return fibo(num-1)+fibo(num-2);
    
}
int main(){
     printf("Fibonacci nth term is %d",fibo(4));
    return 0;
}