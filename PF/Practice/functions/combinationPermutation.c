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
             int r,n;int ncr; int nfact,rfact,nrfact;
    printf("enter value of n");
    scanf("%d",&n);
     printf("enter value of r");
    scanf("%d",&r);

    // nfact=factorial(n);
    // rfact=factorial(r);
    // nrfact=factorial(n-r);

    // ncr=nfact/(rfact*nrfact);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("Combination  is %d",ncr);
    return 0;
}