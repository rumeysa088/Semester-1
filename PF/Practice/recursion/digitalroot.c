#include<stdio.h>

int add(int num){
    if(num<10)return num;
     int sum=0;
    while(num>0){
        int dig=num%10;
        sum+=dig;
        num=num/10;
    }
    return add(sum);
}
int main(){
  int num;
    printf("Enter a number: ");
    scanf("%d",&num);
 
    printf("Sum is : %d",add(num));
    return 0;
}