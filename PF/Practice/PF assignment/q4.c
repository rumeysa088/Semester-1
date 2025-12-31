#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  printf("Enter your first card (1-13)");
  scanf(" %d", &a);
  printf("Enter your second card (1-13)");
  scanf(" %d", &b);
  printf("Enter your third card (1-13)");
  scanf(" %d", &c);
  printf("Enter your forth card (1-13)");
  scanf(" %d", &d);
  printf("Enter your fifth card (1-13)");
  scanf(" %d", &e);
  if(
       a==b && b==c && d==e && a!=d ||
       a==d && d==c && b==e && a!=b ||
       a==e && e==c && b==d && a!=b ||
       a==b && b==d && c==e && a!=c ||
       a==b && b==e && c==d && a!=c ||
       d==b && b==c && a==e && d!=a ||
       e==b && b==c && a==d && e!=a ||
       d==e && e==c && b==a && d!=b ||
       d==b && b==e && c==a && d!=c ||
       a==d && d==e && b==c && a!=b 
    )
  {
     printf(" FULL HOUSE!\n");
  }     
  else{
    printf(" NOT A FULL HOUSE\n");
  }
return 0;

}