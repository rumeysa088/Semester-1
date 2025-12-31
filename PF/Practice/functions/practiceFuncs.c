#include<stdio.h>
int factorial(int n)
{
  int fact=1;int i;
  for(i=2;i<=n;i++)
  {
     fact*=i;
  }
  return fact;
}
int main(){
             int num;int fact;
    printf("enter number u want factorial of");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factroial is %d",fact);
    return 0;
}