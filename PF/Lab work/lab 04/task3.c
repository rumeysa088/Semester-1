#include<stdio.h>
int main(){
            int num1,num2,num3;
            printf("Enter three no.s");
            scanf("%d %d %d",&num1, &num2, &num3);
             
  if(num1>num2)
  {
    if(num1>num3)
    {
     printf(" NUMBER 1 is the greatest NO.");
    }
  }
  else if(num2>num3)
  {
    printf(" NUMBER 2 is the greatest NO.");
  }
  else 
  {
    printf(" NUMBER 3 is the greatest NO.");
  }
   return 0;         

}