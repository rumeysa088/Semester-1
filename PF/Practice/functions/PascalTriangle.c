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
int combination(int n,int r)
{
   int ncr=factorial(n)/(factorial(r)*factorial(n-r));
   return ncr;
}
int main(){
             int i,j;int ncr;
             int rows;
    printf("enter value of r");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {   for(int k=rows;k>i;k--)
       {
        printf(" ");
       }
        for(j=0;j<=i;j++)
        {
           printf("%d ",combination(i,j));
        }printf("\n");
    }
   

    return 0;
}